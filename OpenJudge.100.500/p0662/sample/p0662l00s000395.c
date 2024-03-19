#include<stdio.h>
int main(void){
    int a,b,c,d;
    int min,max;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    min=c;
    max=d;
    if(a>c)min=a;
    if(b<d)max=b;
   int ans=max-min;
    if(ans>=0){
        printf("%d\n",ans);
    }else{
        printf("0\n");
    }
    return 0;
}