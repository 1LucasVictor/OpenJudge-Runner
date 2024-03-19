#include<stdio.h>
int main(void)
{
    int K,A,B;
    int i;
  
    scanf("%d",&K);
    scanf("%d%d",&A,&B);
  
    for(i=0;i<=B-A;i++){
      if((A+i)%4==0){
        printf("OK\n");
        return 0;
      }
    }
  
    printf("NG\n");
      
    return 0;
}
