#include<stdio.h>
int main()
{
    int A,B,T,i,t,b=0;
    scanf("%d %d %d",&A,&B,&T);
    if(A>=1 && B>=1 && T>=1 && A<=20 && B<=20 && T<=20){
        for(i=1;;i++){
            t=i*A;
             if(t>T+.5)break;
            b=b+B;

        }
    }
    printf("%d\n",b);
    return 0;
}
