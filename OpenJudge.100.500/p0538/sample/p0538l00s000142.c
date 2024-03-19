#include<stdio.h>
int main(void){
    int A,B;
    scanf("%d %d",&A,&B);
    int x=A*B;
    if((1<=A&&A<=9)&&(1<=B&&B<=9)){
        printf("%d\n",x);
    }else if((A<1||9<A)||(B<1||9<B)){
        printf("-1\n");
}
}