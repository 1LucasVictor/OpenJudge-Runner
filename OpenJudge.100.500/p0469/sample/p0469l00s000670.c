#include <stdio.h>

int main (void)
{   
    int K,A,B,i;
    
    scanf("%d",&K);
    scanf("%d",&A);
    scanf("%d",&B);

    for(i=A; i<=B; i++){
      if(i % K == 0){
        printf("OK\n");  
        return 0;
      }
    }
    printf("NG\n");  
    

    return 0;

}
