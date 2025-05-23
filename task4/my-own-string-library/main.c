#include "_string.h"

int main(void){
    /*
    char dest1[100];
    char dest2[100];

    // Test my_strcpy
    printf("Testing my_strcpy:\n");
    my_strcpy(dest1, "Hello, world!");
    printf("Source: \"Hello, world!\"\n");
    printf("Copied: \"%s\"\n\n", dest1);

    // Test my_strncpy with n > strlen(src)
    printf("Testing my_strncpy (n > length):\n");
    my_strncpy(dest2, "Short", 10);
    printf("Source: \"Short\"\n");
    printf("Copied: \"%s\"\n", dest2);
    printf("Remaining bytes padded with nulls.\n\n");

    // Test my_strncpy with n < strlen(src)
    printf("Testing my_strncpy (n < length):\n");
    my_strncpy(dest2, "TruncateMe", 5);
    dest2[5] = '\0'; // Manually null-terminate for safe printing
    printf("Source: \"TruncateMe\"\n");
    printf("Copied: \"%s\"\n", dest2);
    printf("strcmp(\"abc\", \"abc\") = %d\n", my_strcmp("abc", "abc"));   // 0
    printf("strcmp(\"abc\", \"abd\") = %d\n", my_strcmp("abc", "abd"));   // < 0
    printf("strcmp(\"abd\", \"abc\") = %d\n", my_strcmp("abd", "abc"));   // > 0
    printf("strcmp(\"abc\", \"ab\") = %d\n", my_strcmp("abc", "ab"));     // > 0
    printf("strcmp(\"ab\", \"abc\") = %d\n", my_strcmp("ab", "abc"));     // < 0
    */

    char *dest = "Hello, ";
    const char *src = "world!";

    my_strcat(dest, src);

    printf("Result: %s\n", dest); // Output: Hello, world!
    return 0;
}