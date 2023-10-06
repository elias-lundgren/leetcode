// https://leetcode.com/problems/plus-one/
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int *returnSize) {
  for (int i = digitsSize - 1; i >= 0; i--) {
    digits[i] = (digits[i] + 1) % 10;

    if (digits[i] % 10 != 0) {
      *returnSize = digitsSize;
      return digits;
    }
  }

  *returnSize = digitsSize + 1;
  int *newDigits = malloc(*returnSize * sizeof(int));

  newDigits[0] = 1;

  for (int i = 1; i < *returnSize; i++) {
    newDigits[i] = 0;
  }

  return newDigits;
}
