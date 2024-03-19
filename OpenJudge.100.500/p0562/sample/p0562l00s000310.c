#include<stdio.h>
int main(void)
{
    int A,B;
    int i,j=0,S=0;
  
    scanf("%d%d",&A,&B);
  
    for(i=1;i<=500;i++){
      S=i*A-(i-1);
      j++;
      if(S>=B){
       printf("%d\n",j);
       return 0;
      }
    }
}
