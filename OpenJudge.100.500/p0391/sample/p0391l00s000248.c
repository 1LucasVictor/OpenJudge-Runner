#include <stdio.h>
#include <string.h>

void print(char s[], int a, int b) {
  int i;
  for (i = a; i <= b; i++)
    printf("%c", s[i]);
  putchar('\n');
}


void replace(char s[], int a, int b, char p[]) {
  int i;
  for (i = a; i <= b; i++)
    s[i] = p[i - a];
}


void reverse(char s[], int a, int b) {
  int i;
  char st[1001];
  for (i = a; i <= b; i++) {
    st[b - i] = s[i];
  }
  for (i = a; i <= b; i++) {
    s[i] = st[i - a];
  }
}


int main() {
  int i;
  int num;
  char str[1001], p[1001], order[8];

  scanf("%s %d", str, &num);
  for (i = 0; i < num; i++) {
    int n1, n2;
    scanf("%s %d %d", order, &n1, &n2);

    if (strcmp(order, "print") == 0) {
      print(str, n1, n2);
    } else if (strcmp(order, "replace") == 0) {
      scanf("%s", p);
      replace(str, n1, n2, p);
    } else {
      reverse(str, n1, n2);
    }
  }

  return 0;
}

