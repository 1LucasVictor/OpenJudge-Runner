#include<stdio.h>
int main(void){
    int A,B,count=0;
    scanf("%d%d",&A,&B);
    count=A*B;
    if(A>10||A<0)
        count=-1;
    if(B>10||A<0)
        count=-1;
    printf("%d\n",count);
    return 0;
}
