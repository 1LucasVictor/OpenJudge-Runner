#include<stdio.h>
#include<stdlib.h>
int main(){
    int A,B;
    scanf("%d",&A);
    scanf("%d",&B);
    
    if(A > 8 || B > 8){
        printf(":(");
    }else{
        printf("Yay!");
    }
    return 0;
}
