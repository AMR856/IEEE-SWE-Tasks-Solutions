#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _atoi(char *s);
int _strlen(char *s);
int _putchar(char c, int fd);
int _isalpha(char c);
void write_error(int fd, char *s);

#define NUM_FILE "converted_numbers.txt"
#define ERROR_FILE "errors.txt"

int main(void){
  if (truncate(NUM_FILE, 0) != 0) {
    write_error(STDERR_FILENO ,"Error truncating the file\n");
    exit(1);
  }
  if (truncate(ERROR_FILE, 0) != 0) {
    write_error(STDERR_FILENO ,"Error truncating the file\n");
    exit(1);
  }
  char *inputs[] = {
      // Original test cases
      "0",
      "42",
      "-42",
      "+42",
      "00123",
      "   789",
      "\t\n 123",
      "   -9999",

      // Additional input behavior
      "abc",
      "12abc",
      "-12abc",
      "  +56 78",
      "--123",
      "++123",
      "+-123",

      // New whitespace-handling cases
      "  123",
      "\n\t  -456",
      "   +007"
  };

  int expected[] = {
      // Expected outputs for original
      0, 42, -42, 42, 123, 789, 123, -9999,

      // Expected outputs for malformed inputs
      0, 12, -12, 56, -123, 123, 123,

      // Expected outputs for new cases
      123, -456, 7
  };

  int n = sizeof(inputs) / sizeof(inputs[0]);

  for (int i = 0; i < n; i++) {
      int result = _atoi(inputs[i]);
      printf("Input: \"%s\" | Expected: %d | Got: %d | %s\n",
              inputs[i], expected[i], result,
              (result == expected[i]) ? "PASS" : "FAIL");
  }
    return EXIT_SUCCESS;
}


// num = num * N + value_of_next_digit;
int _atoi(char *s){
  int length = _strlen(s);
  int num = 0;
  int finished = 0;
  int plus_num = 0, minus_num = 0;
  int printed_sign = 0;
  int fd1 = open(NUM_FILE, O_CREAT | O_WRONLY | O_APPEND, 0644);

  if (fd1 == -1) {
    write_error(STDERR_FILENO, "Error opening the file\n");
    return 1;
  }

  int fd2 = open(ERROR_FILE, O_CREAT | O_WRONLY | O_APPEND, 0644);
  if (fd2 == -1) {
    close(fd1);
    write_error(STDERR_FILENO, "Error opening the file\n");
    return 1;
  }

  for (int i = 0; i < length; i++){
    while (1 && !finished){ 
      if (s[i] == '+') plus_num++;
      else if(s[i] == '-') minus_num++;
      else {
        if (_isalpha(s[i])){
          write_error(fd2,
            "Number contains chars in the place where signs should exist\n");
          close(fd1);
          close(fd2);
          return 0;
        } else if (s[i] == ' ' ||
          s[i] == '\t' || s[i] == '\n') {
          i++;
          continue;
        } else if (s[i] == '0' && length == 1) {
          finished = 1;
          break;
        } else if (s[i] == '0' && length != 1){
          i++;
          continue;
        }
        finished = 1;
        break;
      }
      i++;
    }
    if (plus_num >= minus_num && !printed_sign){
      _putchar('+', fd1);
      printed_sign = 1;
    } 
    else if(minus_num > plus_num && !printed_sign) {
      _putchar('-', fd1);
      printed_sign = 1;
    }
    if (_isalpha(s[i]) || s[i] == '+' || s[i] == '-' || s[i] == ' '){
      write_error(fd2, "Number contains chars or signs in the middle\n");
      if (plus_num < minus_num) num = -num;
      _putchar('\n', fd1);
      close(fd1);
      close(fd2);
      return num;
    }
    _putchar(s[i], fd1);
    // 123 multipler -> 100 -> 12 + 100 = 120
    num = num * 10 + (s[i] - '0'); 
  }
  if (plus_num < minus_num) num = -num;
  _putchar('\n', fd1);
  close(fd1);
  close(fd2);
  return num;
}
// 1
// 
// 12000
// 23232

int _strlen(char *s){
  char *t = s;
  int length = 0;
  while (*t){
    length++;
    t++;
  }
  return length;
}

int _putchar(char c, int fd){
  int status;
  status = write(fd, &c, 1);
  return status;
}

void write_error(int fd, char *s){
  if (write(fd, s, _strlen(s)) == -1){
    perror("Error writing to file\n");
    return;
  }
}

int _isalpha(char c){
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}