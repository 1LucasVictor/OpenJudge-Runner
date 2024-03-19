#include <stdio.h>

int main()
{
    char x[1000];
    int sum,i;
    scanf("%s", &x);
    while(x[0] != '0') {
      sum=0; i=0;
      while(x[i] != '\0')
          sum += x[i++]-'0';
      printf("%d\n", sum);
      scanf("%s", &x);
    }

    return 0;
}

