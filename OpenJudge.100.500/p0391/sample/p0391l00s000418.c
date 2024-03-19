#include <stdio.h>
#include <string.h>

void str_reverse(char s[], int num1, int num2)
{
  char box[1001] = {"\0"};
  int i;

  for (i = 0; i <= num2 -num1; i++) {
    box[i] = s[num2 - i];
  }
  for (i = 0; i <= num2 - num1; i++) {
    s[num1 + i] = box[i];
  }
}

void str_replace(char s[], char m[], int num1)
{
  int i = 0;
  
  while(m[i]) {
    s[num1 + i] = m[i];
    i++;
  }
}

void str_print(char s[], int num1, int num2)
{
  int i;

  for (i = num1; i <= num2; i++) {
    printf("%c", s[i]);
  }
  puts("");
}

int main(void) {
  char str[1001] = {"\0"};
  int q;
  int a, b;
  char p[1001] = {"\0"};
  int i;
  char dir[10] = {"\0"};
  char replace[] = "replace";
  char reverse[] = "reverse";
  char print[] = "print";

  scanf("%s", str);
  scanf("%d", &q);

  for (i = 0; i < q; i++) {
    scanf("%s", dir);
    if (strcmp(dir, replace) == 0) {
      scanf("%d %d %s", &a, &b, p);
      str_replace(str, p, a);
    }
    else if(strcmp(dir, reverse) == 0) {
      scanf("%d %d", &a, &b);
      str_reverse(str, a, b);
    }
    else if(strcmp(dir, print) == 0) {
      scanf("%d %d", &a, &b);
      str_print(str, a, b);
    }
  }

  
  
  return 0;
}
