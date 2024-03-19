#include<stdio.h>
int main()
{
    int n1,n2,t,x,g;
    scanf("%d%d",&n1,&n2);
    if(n1==0)
        g=n1;
    else if(n2==0)
        g=n2;
    else{
    while(n2!=0){
        t=n2;
        n2=n1%n2;
        n1=t;

    }
    g=n1;
}
printf("%d",g);
}

