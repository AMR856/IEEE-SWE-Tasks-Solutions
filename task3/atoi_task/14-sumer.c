#include "./_atoi.h"

int sum_args(int argc, char **argv){
    int sum = 0;
    if (argc == 1) return 0;
    else {
        argv++;
        for (int i = 1; i < argc; i++){
            sum += _atoi(*argv);
            argv++;
        }
        return sum;
    }
}