#include<stdio.h>

int main(void)
{
      int H,A,i;

     scanf("%d%d",&H,&A);

     i=H/A;
     if(H%A!=0)i++;
        printf("%d\n",i);
    return 0;
}
