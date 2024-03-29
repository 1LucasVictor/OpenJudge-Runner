#include <stdio.h>
#include <string.h>

#define MAX 1000
#define OP  10

void Print(char S[], int x, int y);
void Reverse(char S[], int x, int y);
void Replace(char S[], char P[], int x, int y);

int main(void) {
  char str[MAX];
  char op[OP];
  char p[MAX];
  int q;
  int i = 0;
  int a, b;

  scanf("%s", str);
  scanf("%d", &q);

  while(i < q) {
    scanf("%s", op);
    scanf("%d %d", &a, &b);

    if(strcmp(op, "print") == 0) {
      Print(str, a, b);
    }
    else if(strcmp(op, "reverse") == 0) {
      Reverse(str, a, b);
    }
    else if(strcmp(op, "replace") == 0) {
      scanf("%s", p);
      Replace(str, p, a, b);
    }
    i++;
  }

  return 0;
}

void Print(char S[], int x, int y) {

  for(int i=x; i<= y; ++i) {
    printf("%c", S[i]);
  }
  printf("\n");
}

void Reverse(char S[], int x, int y) {
  char tmp;
  int i = x;
  int j = y;

  while (i < (x+y)/2) {
    tmp = S[i];
    S[i] = S[j];
    S[j] = tmp;
    i++;
    j--;
  }
}

void Replace(char S[], char P[], int x, int y) {
  int i=x, j=0;

  while(i <= y) {
    S[i++] = P[j++];
  }
}

