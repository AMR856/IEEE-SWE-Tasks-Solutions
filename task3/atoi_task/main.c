#include "./_atoi.h"

int main(int argc, char **argv){
    truncate_file(NUM_FILE);
    truncate_file(ERROR_FILE);
//   char *inputs[] = {
//       "0",
//       "42",
//       "-42",
//       "+42",
//       "00123",
//       "   789",
//       "\t\n 123",
//       "   -9999",
//       "abc",
//       "12abc",
//       "-12abc",
//       "  +56 78",
//       "--123",
//       "++123",
//       "+-123",
//       "  123",
//       "\n\t  -456",
//       "   +007"
//   };

//   int expected[] = {
//       0, 42, -42, 42, 123, 789, 123, -9999,
//       0, 12, -12, 56, -123, 123, 123,
//       123, -456, 7
//   };

//   int n = sizeof(inputs) / sizeof(inputs[0]);
//   for (int i = 0; i < n; i++) {
//       int result = _atoi(inputs[i]);
//       printf("Input: \"%s\" | Expected: %d | Got: %d | %s\n",
//               inputs[i], expected[i], result,
//               (result == expected[i]) ? "PASS" : "FAIL");
//   }
//   return EXIT_SUCCESS;
    printf("Count nums: %d\n", sum_args(argc, argv));
}
