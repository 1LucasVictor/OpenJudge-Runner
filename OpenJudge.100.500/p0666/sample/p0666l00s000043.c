#include <stdio.h> 

int main(void){ 
    int X;
    int A;
    int B; 
    
 
    scanf("%d", &X); 
    scanf("%d", &A); 
    scanf("%d", &B); 

    if(B - A <= X){

        if(B - A <= 0){

          printf("delicious");
 
        }else{

          printf("safe");

        }

    }else{
    
        printf("dangerous");
  
   }

}