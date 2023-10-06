#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *str = argv[1];

  int i = 0;
  int word_len = 0;

  while (str[i] != '\0') {
    if (str[i + 1] != '\0' && isspace(str[i]) && !isspace(str[i + 1])) {
      word_len = 0;
    }

    if (!isspace(str[i])) {
      word_len++;
    }

    i++;
  }

  printf("%i\n", word_len);
}
