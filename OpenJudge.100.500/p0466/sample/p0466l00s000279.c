#include<stdio.h>
int main(void){
    char A[11]={0,0,0,0,0,0,0,0,0,0,0};
    char B[100]={0,0,0,0,0,0,0,0,0,0,0};
   
    int a,b;
    scanf("%s",A);
    scanf("%s",B);
    for(a=0;a<11;a++){
    if(A[a]==B[a]){

    }else{
        
        if(A[a]>1){
       
            printf("NO");
            a=1000;
        }
        else{
            printf("Yes");
            
            a=1000;
            
        }
    }
    
    }
}