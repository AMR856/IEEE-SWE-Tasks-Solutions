#include <stdio.h>
#include <stdlib.h>

long long int sumDigits (long long int);

int main(int argc, char **argv){
    if (argc == 1) return EXIT_FAILURE;
    argv++;
    long long int sum = sumDigits(atoi(*argv));
    printf("%lld\n", sum);
}

long long int sumDigits (long long int n){
    static int digitNum = 0;
    if (n == 0) {
        printf("Num of digits in the number: %d\n", digitNum);
        return 0;
    }
    digitNum++;
    return sumDigits(n / 10) + n % 10;
}
