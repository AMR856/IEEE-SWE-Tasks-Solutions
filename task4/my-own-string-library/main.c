#include "_string.h"

int main(void){

    // char dest1[100];
    // char dest2[100];

    // Test my_strcpy
    // printf("Testing my_strcpy:\n");
    // my_strcpy(dest1, "Hello, world!");
    // printf("Source: \"Hello, world!\"\n");
    // printf("Copied: \"%s\"\n\n", dest1);


    // Test my_strncpy with n > strlen(src)
    // printf("Testing my_strncpy (n > length):\n");
    // my_strncpy(dest2, "Short", 10);
    // printf("Source: \"Short\"\n");
    // printf("Copied: \"%s\"\n", dest2);
    // printf("Remaining bytes padded with nulls.\n\n");


    // Test my_strncpy with n < strlen(src)
    // printf("Testing my_strncpy (n < length):\n");
    // my_strncpy(dest2, "TruncateMe", 5);
    // dest2[5] = '\0'; // Manually null-terminate for safe printing
    // printf("Source: \"TruncateMe\"\n");
    // printf("Copied: \"%s\"\n", dest2);


    // Test strcmp
    // printf("strcmp(\"apple\", \"apple\") = %d\n", my_strcmp("apple", "apple"));     // 0
    // printf("strcmp(\"apple\", \"apricot\") = %d\n", my_strcmp("apple", "apricot")); // negative
    // printf("strcmp(\"banana\", \"apple\") = %d\n", my_strcmp("banana", "apple"));   // positive
    // printf("strcmp(\"abc\", \"abcd\") = %d\n", my_strcmp("abc", "abcd"));           // negative
    // printf("strcmp(\"abcd\", \"abc\") = %d\n", my_strcmp("abcd", "abc"));           // positive
    // printf("strcmp(\"Hello\", \"hello\") = %d\n", my_strcmp("Hello", "hello"));     // negative (because 'H' < 'h')
    // printf("strcmp(\"\", \"abc\") = %d\n", my_strcmp("", "abc"));                   // negative
    // printf("strcmp(\"abc\", \"\") = %d\n", my_strcmp("abc", ""));                   // positive
    // printf("%d\n",my_strcmp("cat", "car"));


    // Test strdub
    // char *copy1 = my_strdup("hello");              printf("copy1: %s\n", copy1); free(copy1);
    // char *copy2 = my_strdup("world");              copy2[0] = 'W'; printf("copy2: %s\n", copy2); free(copy2);
    // char *copy3 = my_strdup("");                   printf("copy3 (empty): '%s'\n", copy3); free(copy3);
    // char *copy4 = my_strdup("repeated");           printf("copy4: %s\n", copy4); free(copy4);
    // char *copy5 = my_strdup("another test");       printf("copy5: %s\n", copy5); free(copy5);

    // const char *arr[] = {"cat", "dog", "fish"};
    // char *c1 = my_strdup(arr[0]), *c2 = my_strdup(arr[1]), *c3 = my_strdup(arr[2]);
    // printf("%s %s %s\n", c1, c2, c3);
    // free(c1); free(c2); free(c3);


    // Test strchr
    // const char *text = "hello world";

    // // Test 1: Find 'o'
    // char *p1 = my_strchr(text, 'o');
    // printf("First 'o' in \"%s\" is at: %s\n", text, p1); // → o world

    // // Test 2: Find 'l'
    // char *p2 = my_strchr(text, 'l');
    // printf("First 'l' in \"%s\" is at: %s\n", text, p2); // → llo world

    // // Test 3: Find space ' '
    // char *p3 = my_strchr(text, ' ');
    // printf("First space in \"%s\" is at: %s\n", text, p3); // →  world

    // // Test 4: Find 'z' (not in string)
    // char *p4 = my_strchr(text, 'z');
    // printf("Find 'z': %s\n", p4 ? p4 : "Not found"); // → Not found

    // // Test 5: Find null terminator '\0'
    // char *p5 = my_strchr(text, '\0');
    // printf("Find null terminator: %p (should be end of string)\n", (void*)p5);\


    // Test memset
    // int arr[5];
    // my_memset(arr, 0, sizeof(arr));  // Set all bytes to 0

    // for (int i = 0; i < 5; i++) {
    //     printf("arr[%d] = %d\n", i, arr[i]);  // All values will be 0
    // }

    // char buffer[10];
    // my_memset(buffer, 'A', sizeof(buffer));

    // for (int i = 0; i < 10; i++) {
    //     printf("%c ", buffer[i]);  // A A A A A A A A A A
    // }
    // printf("\n");

    // Test memcpy
    // char src1[] = "Hello, world!";
    // char dest1[20];

    // my_memcpy(dest1, src1, my_strlen(src1) + 1);  // Include null terminator

    // printf("Source: %s\n", src1);
    // printf("Dest:   %s\n", dest1);


    // int src2[] = {1, 2, 3, 4, 5};
    // int dest2[5];

    // my_memcpy(dest2, src2, sizeof(src2));  // Copy all elements

    // for (int i = 0; i < 5; i++) {
    //     printf("dest[%d] = %d\n", i, dest2[i]);
    // }


    // char src3[] = "abcdefghij";
    // char dest3[6];

    // my_memcpy(dest3, src3 + 2, 5);  // Copy "cdefg"
    // dest3[5] = '\0';           // Manually null-terminate

    // printf("Copied substring: %s\n", dest3);  // Output: cdefg


    // Test strstr

    // const char *text1 = "Hello, world!";
    // const char *sub1 = "world";

    // char *result1 = my_strstr(text1, sub1);
    // if (result1) {
    //     printf("Found: %s\n", result1);  // Output: Found: world!
    // } else {
    //     printf("Not found.\n");
    // }

    // const char *text2 = "apple pie";
    // const char *sub2 = "banana";

    // char *result2 = my_strstr(text2, sub2);
    // if (result2) {
    //     printf("Found: %s\n", result2);
    // } else {
    //     printf("Not found.\n");  // Output: Not found.
    // }


    // const char *text3 = "one two three two four";
    // const char *first3 = my_strstr(text3, "two");
    // if (first3) {
    //     printf("First: %s\n", first3);  // Output: two three two four

    //     char *second3 = my_strstr(first3 + 1, "two");
    //     if (second3) {
    //         printf("Second: %s\n", second3);  // Output: two four
    //     }
    // }

    // const char *text4 = "something";
    // char *result4 = my_strstr(text4, "");

    // printf("Result: %s\n", result4);  // Output: something (returns the full string)

    // More strstr Tests
    // const char *text;
    // const char *needle;
    // char *result;

    // // Test 1: Basic match
    // text = "The quick brown fox";
    // needle = "quick";
    // result = my_strstr(text, needle);
    // printf("Test 1: %s\n", result ? result : "Not found");

    // // Test 2: Substring at end
    // text = "abcdefg";
    // needle = "efg";
    // result = my_strstr(text, needle);
    // printf("Test 2: %s\n", result ? result : "Not found");

    // // Test 3: Substring at start
    // text = "hello world";
    // needle = "hello";
    // result = my_strstr(text, needle);
    // printf("Test 3: %s\n", result ? result : "Not found");

    // // Test 4: Substring not found
    // text = "pineapple";
    // needle = "grape";
    // result = my_strstr(text, needle);
    // printf("Test 4: %s\n", result ? result : "Not found");

    // // Test 5: Empty needle
    // text = "abc";
    // needle = "";
    // result = my_strstr(text, needle);
    // printf("Test 5: '%s'\n", result ? result : "Not found");

    // // Test 6: Empty haystack
    // text = "";
    // needle = "abc";
    // result = my_strstr(text, needle);
    // printf("Test 6: %s\n", result ? result : "Not found");

    // // Test 7: Both empty
    // text = "";
    // needle = "";
    // result = my_strstr(text, needle);
    // printf("Test 7: '%s'\n", result ? result : "Not found");

    // // Test 8: Needle longer than haystack
    // text = "hi";
    // needle = "hello";
    // result = my_strstr(text, needle);
    // printf("Test 8: %s\n", result ? result : "Not found");

    // // Test 9: Multiple occurrences
    // text = "abc abc abc";
    // needle = "abc";
    // result = my_strstr(text, needle);
    // printf("Test 9: %s\n", result ? result : "Not found");

    // // Test 10: Case-sensitive search
    // text = "CaseSensitive";
    // needle = "casesensitive";
    // result = my_strstr(text, needle);
    // printf("Test 10: %s\n", result ? result : "Not found");

    // // Test 11: Overlapping match
    // text = "aaaaa";
    // needle = "aaa";
    // result = my_strstr(text, needle);
    // printf("Test 11: %s\n", result ? result : "Not found");

    // // Test 12: Match with space
    // text = "this is a test";
    // needle = "is a";
    // result = my_strstr(text, needle);
    // printf("Test 12: %s\n", result ? result : "Not found");

    // // Test 13: Match at last position
    // text = "ends with it";
    // needle = "it";
    // result = my_strstr(text, needle);
    // printf("Test 13: %s\n", result ? result : "Not found");

    // int result;

    // // // Test 1: Same strings
    // result = my_memcmp("abc", "abc", 3);
    // printf("Test 1: %d\n", result);  // 0

    // // Test 2: First is less
    // result = my_memcmp("abc", "abd", 3);
    // printf("Test 2: %d\n", result);  // < 0

    // // Test 3: First is greater
    // result = my_memcmp("abd", "abc", 3);
    // printf("Test 3: %d\n", result);  // > 0

    // // Test 4: Compare partial (prefix equal)
    // result = my_memcmp("abcdef", "abcxyz", 3);
    // printf("Test 4: %d\n", result);  // 0

    // // Test 5: Compare more bytes (detects difference)
    // result = my_memcmp("abcdef", "abcxyz", 6);
    // printf("Test 5: %d\n", result);  // < 0

    // // Test 6: Compare int arrays
    // int arr1[] = {1, 2, 3};
    // int arr2[] = {1, 2, 4};
    // result = my_memcmp(arr1, arr2, sizeof(arr1));  // Compares bytes
    // printf("Test 6: %d\n", result);  // < 0

    // // Test 7: Zero-length comparison (always equal)
    // result = my_memcmp("abc", "xyz", 0);
    // printf("Test 7: %d\n", result);  // 0

    // my_strcat Tests
    // char buffer1[50] = "Hello, ";
    // my_strcat(buffer1, "world!");
    // printf("Test 1: %s\n", buffer1);  // Hello, world!

    // char buffer2[100] = "";
    // my_strcat(buffer2, "abc");
    // my_strcat(buffer2, "123");
    // printf("Test 2: %s\n", buffer2);  // abc123

    // char buffer3[50] = "Base";
    // my_strcat(buffer3, "");
    // printf("Test 3: %s\n", buffer3);  // Base

    // char buffer4[50] = "";
    // my_strcat(buffer4, "");
    // printf("Test 4: %s\n", buffer4);  // (empty string)

    // char buffer5[50] = "a";
    // my_strcat(buffer5, "b");
    // my_strcat(buffer5, "c");
    // printf("Test 5: %s\n", buffer5);  // abc

    // char buffer6[50] = "C programming is ";
    // my_strcat(buffer6, "fun");
    // printf("Test 6: %s\n", buffer6);  // C programming is fun

    // // Make sure not to overflow
    // char buffer7[10] = "123";
    // // Unsafe: this may cause overflow if src is too large!
    // my_strcat(buffer7, "4");
    // my_strcat(buffer7, "5");
    // printf("Test 7: %s\n", buffer7);  // 12345

    char buffer1[50] = "Hello, ";
    my_strncat(buffer1, "world!", 6);  // Append entire "world!"
    printf("Test 1: %s\n", buffer1);  // Hello, world!

    char buffer2[50] = "abc";
    my_strncat(buffer2, "123456789", 3);  // Only "123"
    printf("Test 2: %s\n", buffer2);  // abc123

    char buffer3[20] = "base";
    my_strncat(buffer3, "", 5);  // Appending empty string
    printf("Test 3: %s\n", buffer3);  // base

    char buffer4[20] = "";
    my_strncat(buffer4, "text", 4);
    printf("Test 4: %s\n", buffer4);  // text

    char buffer5[20] = "A";
    my_strncat(buffer5, "BCD", 2);  // Append only "BC"
    printf("Test 5: %s\n", buffer5);  // ABC

    // Partial copy with long src
    char buffer6[10] = "x:";
    my_strncat(buffer6, "1234567890", 5);  // Append first 5 chars
    printf("Test 6: %s\n", buffer6);  // x:12345

    // Edge case: n = 0
    char buffer7[20] = "start";
    my_strncat(buffer7, "IGNORED", 0);  // Append nothing
    printf("Test 7: %s\n", buffer7);  // start
}


// gcc -c mylib.c -o mylib.o

// # Step 2: Archive into static lib
// ar rcs libmylib.a mylib.o

// # Step 3: Compile and link with main.c
// gcc main.c -L. -lmylib -o myprogram