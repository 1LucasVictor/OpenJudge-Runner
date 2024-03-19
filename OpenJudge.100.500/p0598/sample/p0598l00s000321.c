#include <stdio.h>
void input(int*,int*);
int main(void){
    int a,b,c;
    input(&a,&b);
    if(b%a==0){
        c=a+b;
    }else{
        c=b-a;
    }
    printf("%d\n",c);
    return 0;
}
void input(int* p,int* q){
    scanf("%d %d",p,q);
}