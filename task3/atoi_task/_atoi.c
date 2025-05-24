#include "./_atoi.h"

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
    while (!finished){ 
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
