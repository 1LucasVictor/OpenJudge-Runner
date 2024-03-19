#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  char ch;
  short int sum;
 
  do {
    sum = 0;
 
    fscanf(stdin, "%c", &ch);
    while (ch != '\n') {
      sum += (short int)atoi(&ch);
      fscanf(stdin, "%c", &ch);
    }
 
    if (sum != 0) {
      fprintf(stdout, "%hd", sum);
      putchar('\n');
    }
  } while (sum != 0);
 
    return 0;
}