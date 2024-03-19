#include <stdio.h>

    
int main(){
  
    int A;
    int B;
    int C;
    int D;
    int E;
    int K;
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&C);
        scanf("%d",&D);
        scanf("%d",&E);
        scanf("%d",&K);

        
        if(E-A>=K){
            printf(":(");
        }else{
            printf("Yay!");
        }
        
        return 0;
}