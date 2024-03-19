#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    
    int answer = C - (A-B);
    if(answer <= 0){
        printf("0\n");
    }else{
        printf("%d\n",answer);
    }
    return 0;
}
