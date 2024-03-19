#include <stdio.h>
#include <string.h>

#define SSIZE 1024
#define CSIZE 16

void print(int a, int b, char*);
void reverse(int a, int b, char*);
void replace(int a, int b, char*, char*);

int main(void){
  char str[SSIZE] = {0}, command[CSIZE] = {0}, p[SSIZE] = {0};
  int q, a, b, i;

  scanf("%s %d", str, &q);
  for (i = 0; i < q; i++) {
    scanf("%s %d %d", command, &a, &b);
    if (!strcmp(command, "print")) {
      print(a, b, str);
    }
    else if (!strcmp(command, "reverse")) {
      reverse(a, b, str);
    }
    else if (!strcmp(command, "replace")) {
      scanf("%s", p);
      replace(a, b, str, p);
    }
    else
      printf("This command is not available!\n");
  }
  return 0;
}

void print(int a, int b, char *str){
  for ( ; a <= b; a++)
    printf("%c", str[a]);
  printf("\n");
}

void reverse(int a, int b, char *str){
  char strtmp[SSIZE] = {0};
  int i;
  strcpy(strtmp, str);
  for (i = 0; a + i <= b; i++) {
    str[a + i] = strtmp[b - i];
  }
}

void replace(int a, int b, char *str, char *p){
  int i = 0;
  for ( ; a <= b; a++) {
    str[a] = p[i];
    i++;
  }
}