#include<stdio.h>
int main(void){
    int a,b,x,i;
    scanf("%d %d %d",&a,&b,&x);
    for(i=1;i<=b;i++){
        if(a+i==x){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}