#include "./printf.h"


// String Functions

size_t my_strlen(const char *s){
    size_t length = 0;
    const char *temp = s;
    while (*temp != '\0'){
        temp++;
        length++; 
    } 
    return length;
}

const char *my_strcpy(char *dest, const char *src){
    const char *temp = src;
    while (*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return temp;
}

int _puts(char *s){
    int status = write(1, s, my_strlen(s));
    return status;
}

bool _isalpha(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' || c <= 'Z');
}

bool _islower(char c){
    return (c >= 'a' && c <= 'z');
}

bool _isupper(char c){
    return (c >= 'A' && c <= 'Z');
}

void reverse(char *str)
{
    if (str == NULL) return;
    char *start = str;
    char *end = str + my_strlen(str) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        end--;
        start++;
    }
}

// Amr Souryia
char * _tolower(const char *str){
    char *lowerString = (char *)malloc(MAX_STRING_SIZE);
    my_strcpy(lowerString, str);
    char *start = lowerString;
    while (*lowerString != '\0'){
        if (_isalpha(*lowerString) && _isupper(*lowerString))
            *lowerString += 32;
        lowerString++;
    }
    lowerString = start;
    return lowerString;
}

char * _toupper(const char *str){
    char *upperString = (char *)malloc(MAX_STRING_SIZE);
    my_strcpy(upperString, str);
    char *start = upperString;
    while (*upperString != '\0'){
        if (_isalpha(*upperString) && _islower(*upperString))
            *upperString -= 32;
        upperString++;
    }
    upperString = start;
    return upperString;
}


char* citoa(int num, char* str, int base, bool canbeNegative, bool cap)
{
    int i = 0;
    bool isNegative = false;

    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    if (num < 0 && canbeNegative && base == 10) {
        isNegative = true;
        num = -num;
    }

    char hexChar = 'a';
    if (cap == true)
        hexChar = 'A';
    while (num != 0) {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + hexChar : rem + '0';
        num = num / base;
    }

    if (isNegative)
        str[i++] = '-';

    str[i] = '\0';
    reverse(str);

    return str;
}
