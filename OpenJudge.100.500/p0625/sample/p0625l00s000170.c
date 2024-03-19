#include<stdio.h>
#include<stdlib.h>
int main(){
    int A,B;
    scanf("%d",&A);
    scanf("%d",&B);
    
    int a = abs(A-B);
    int b = A+B;
    
    if(b > 12 && a >= 4){
        printf(":(");
    }else{
        printf("Yay!");
    }
    return 0;
}