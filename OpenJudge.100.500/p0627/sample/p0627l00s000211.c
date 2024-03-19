#include<stdio.h>
int main ()
{
    int A,B,sum,prod,dif;
    scanf("%d %d",&A,&B);
    sum=A+B;
    prod=A*B;
    dif=A-B;
    if(sum>prod&&sum>dif){
        printf("%d",sum);
    }
    else if(prod>sum&&prod>dif){
        printf("%d",prod);
    }
    else{
        printf("%d",dif);
    }
}
