#include<stdio.h>

int main(void)
{
    int A=0;
    int B=0;
    int T=0;
    int count=0;

    scanf("%d%d%d",&A,&B,&T);
    if(((A<1||A>20)||(B<1||B>20))||(T<1||T>20)){
        goto end;
    }

    int i=A;
    while(i<=T+0.5){
        i+=A;
        count+=1*B;
        //printf("%d,%d\n",A,count);
    }

    printf("%d\n",count);
    end:
    return 0;
}