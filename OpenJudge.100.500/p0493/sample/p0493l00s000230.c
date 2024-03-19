#include<stdio.h>

int main(void)
{
   int x,a500,b500,a5,s;
   scanf("%d",&x);
   a500=x/500; //500円硬貨の枚数
   b500=x%500; //残るお金
   a5=b500/5; //5円硬貨の枚数
   s=a500*1000+a5*5;
   printf("%d",s);
   return 0;
}
