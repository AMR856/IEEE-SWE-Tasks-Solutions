#include "./printf.h"

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
    return temp;
}


void reverse(char *str)
{
    if (str == NULL) return;
    char *start = str;
    char *end = str + my_strlen(str) - 1;

    while (start < end) {
        char *temp = *str;
        *str = *end;
        *end = *temp;
        end--;
        start++;
    }
}

char* citoa(int num, char* str, int base)
{
    int i = 0;
    bool isNegative = false;

    /* Handle 0 explicitly, otherwise empty string is
     * printed for 0 */
    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    // In standard itoa(), negative numbers are handled
    // only with base 10. Otherwise numbers are
    // considered unsigned.
    if (num < 0 && base == 10) {
        isNegative = true;
        num = -num;
    }

    // Process individual digits
    while (num != 0) {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num = num / base;
    }

    // If number is negative, append '-'
    if (isNegative)
        str[i++] = '-';

    str[i] = '\0'; // Append string terminator

    // Reverse the string
    reverse(str);

    return str;
}
