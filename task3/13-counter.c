#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LEN 1000

int counter(char *mystring);

int main(void){
    char *str = (char *)malloc(MAX_STRING_LEN);
    strcpy(str, "amr                      souriya");
    printf("Words Count: %d\n", counter(str));
    strcpy(str, "              Hi         I'm            Syrian             ");
    printf("Words Count: %d\n", counter(str));
    strcpy(str, "                      dfdff      dfdf         hi                 lol      dfafojdfhasdiof dfafhdfasdfhdsafasd dsfdafdfasdfasdjfiojasdi                     1894124891249");
    printf("Words Count: %d\n", counter(str));
}

int counter(char *mystring){
    int words_count = 0;
    char *temp = mystring;
    if (mystring != NULL && *mystring != ' ') words_count++;
    while (*mystring != '\0'){
        temp = mystring + 1;
        if (*mystring == ' ' && *temp != '\0' && *temp != ' '){
                words_count++;
                mystring++;
                continue;
            }
        mystring++;
    }
    return words_count;
}
