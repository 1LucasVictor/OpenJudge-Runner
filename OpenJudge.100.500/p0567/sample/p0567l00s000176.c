#include<stdio.h>
int main(void){
    int A,B,C,ans;
    scanf("%d%d%d",&A,&B,&C);
    ans=A-(B+C);
    if(ans<0)
        ans=ans*(-1);
    else if(ans>=0)
        ans=0;
    printf("%d\n",ans);
    return 0;
}
