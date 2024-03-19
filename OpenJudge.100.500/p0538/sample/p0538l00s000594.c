#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d %d",&a,&b);
    result=a*b;
    if(a>=1 && a<=9){
        if(b>=1 && b<=9) printf("%d\n",result);
        else printf("-1\n");
    }
    else printf("-1\n");

    return 0;
}