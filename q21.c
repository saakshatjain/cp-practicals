#include <stdio.h>
#include <string.h>

void replaceSubstring(char str[], char search[], char replace[]) {
  int i, j, k, search_len, replace_len, str_len, start;

  search_len = strlen(search);
  replace_len = strlen(replace);
  str_len = strlen(str);

  for (i = 0; i <= str_len - search_len; i++) {
    start = i;
    for (j = 0; j < search_len; j++) {
      if (str[start] != search[j]) {
        break;
      }
      start++;
    }
    if (j == search_len) {
      for (k = start; k <= str_len; k++) {
        str[k - search_len + replace_len] = str[k];
      }
      for (k = 0; k < replace_len; k++) {
        str[i + k] = replace[k];
      }
      i += replace_len - 1;
      str_len = str_len - search_len + replace_len;
    }
  }
}

int main() {
  char str[100], search[100], replace[100];

  printf("Enter a string: ");
  scanf("%s", str);

  printf("Enter search substring: ");
  scanf(" %s", search);

  printf("Enter replace string: ");
  scanf(" %s", replace);

  replaceSubstring(str, search, replace);

  printf("Result: %s\n", str);

  return 0;
}
