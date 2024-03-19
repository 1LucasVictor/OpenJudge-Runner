#include<stdio.h>
int main(void){
    int a,b,ans,count=1;
    while(scanf("%d %d",&a,&b)!=EOF){
        ans=a+b;
        while(ans>=10){
            ans=ans/10;
            count++;
        }
        printf("%d\n",count);
        count=1;
    }
return 0;
}