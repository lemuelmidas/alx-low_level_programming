#include "main.h"
#include <stdio.h>

char *cap_string(char *str) {
  int capitalize_next = 1; 

  for (int i = 0; str[i] != '\0'; i++) {
    if (capitalize_next && isalpha(str[i])) {
      str[i] = toupper(str[i]); 
      capitalize_next = 0;
    } else if (strchr(" \t\n,;.!?\"(){}", str[i])) {
      capitalize_next = 1;  
    }
  }

  return str;
}

int main() {
  char str[] = "this is a test, hello world!";
  char *result = cap_string(str);

  printf("Original string: %s\n", str);
  printf("Capitalized string: %s\n", result);

  return 0;
}
