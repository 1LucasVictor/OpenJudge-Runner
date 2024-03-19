#include<stdio.h>
int main(void)
{
    int K,A,B;
    int i;
  
    scanf("%d",&K);
    scanf("%d%d",&A,&B);
  
    if((A==B)&&(A%K==0)) { printf("OK\n"); return 0; }
    else{ 
      for(i=0;i<=B-A;i++){
        if((A+i)%K==0){
          printf("OK\n");
          return 0;
        }
      }
    }
  
    printf("NG\n");
      
    return 0;
}
