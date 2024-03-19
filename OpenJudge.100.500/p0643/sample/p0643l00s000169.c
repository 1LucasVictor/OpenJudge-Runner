#include<stdio.h>

int main()
{
    int b,c;

    // スペース区切りの整数の入力
    scanf("%d %d",&b,&c);
  
  	if ((b * c) % 2 == 0)
    {
      printf("Even\n");
    }
  	else
    {
      printf("Odd\n");
    }

    return 0;
}
