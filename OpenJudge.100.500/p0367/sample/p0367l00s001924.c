#include<stdio.h>
int main(void)
{
    int a,b,c,i,n=0,s;
    scanf("%d%d%d",&a,&b,&c);
    for(i=0;i<b-a+1;i++){
        if(c%(i+a)==0){
            s=n+1;
        }
        else{
            s=n;
        }
        n=s;
    }
    printf("%d\n",n);
    return 0;
}