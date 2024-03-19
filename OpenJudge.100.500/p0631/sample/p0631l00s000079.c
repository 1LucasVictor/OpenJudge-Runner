#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A+B<C){
        printf("NO");
    }else if(A>C){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}