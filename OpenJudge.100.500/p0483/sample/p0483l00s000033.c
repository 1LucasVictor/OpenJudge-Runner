#include <stdio.h>
#include <stdlib.h>

int main()
{
  char number[2];
  scanf("%s", &number);

  if (number[0]=='7' || number[1]=='7' || number[2]=='7'){
    printf("Yes");
  }
  else {
    printf("No");
    }


    return 0;
}
