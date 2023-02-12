#include <stdio.h>
#include <ctype.h>

int main() {
  char str[100];
  int i, j, freq[26] = {0};

  printf("Enter a line of text: ");
  scanf("%s", str);

  for (i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i])) {
      j = tolower(str[i]) - 'a';
      freq[j]++;
    } else if (isdigit(str[i])) {
      freq[str[i] - '0' + 26]++;
    }
  }

  for (i = 0; i < 26; i++) {
    if (freq[i] > 0) {
      printf("%c occurs %d times\n", i + 'a', freq[i]);
    }
  }
  for (i = 26; i < 36; i++) {
    if (freq[i] > 0) {
      printf("%d occurs %d times\n", i - 26, freq[i]);
    }
  }

  return 0;
}
