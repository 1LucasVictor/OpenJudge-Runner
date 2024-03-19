#include<stdio.h>
int main(void){
    char A[11]="AAAAAAAAAAA";
    char B[11]="AAAAAAAAAAA";

   
    int a,b;
    scanf("%s",A);
    scanf("%s",B);
    for(a=0;a<11;a++){
    if(A[a]==B[a]){

    }else{
        
        if(A[a]==65){

 printf("NO");
            a=1000;
        }else{

        if(B[a+1]==65){

                 printf("NO");
            a=1000;
                  

            }else{
         printf("Yes");
                             a=1000;

            
            }
        }
        
          
        }
    }
    
    }
