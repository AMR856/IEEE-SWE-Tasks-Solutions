#include <stdio.h>

enum Type {
    INT,
    CHAR,
    STRING,
    FLOAT
};

void echo_data(void *data, enum Type);

int main(void){
    int num = 42;
    char *message = "Hello, World!";
    float pi = 3.14159;
    char ch = 'A';

    echo_data(&num, INT);
    echo_data(message, STRING); 
    echo_data(&pi, FLOAT);      
    echo_data(&ch, CHAR);  

}

void echo_data(void *data, enum Type type){
    switch (type)
    {
    case INT:
        printf("Data is: %d\n", *(int *)data);
        break;
    case STRING:
        printf("Data is: %s\n", (char *)data);
        break;
    case FLOAT:
        printf("Data is: %f\n", *(float *)data);
        break;
    case CHAR:
        printf("Data is: %c\n", *(char *)data);
        break;
    default:
        printf("Invalid datatype\n");
        break;
    }
}