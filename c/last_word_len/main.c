// https://leetcode.com/problems/length-of-last-word/
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
  int i = 0;
  int word_len = 0;

  while (s[i] != '\0') {
    if (s[i + 1] != '\0' && isspace(s[i]) && !isspace(s[i + 1])) {
      word_len = 0;
    }

    if (!isspace(s[i])) {
      word_len++;
    }

    i++;
  }

  return word_len;
}
