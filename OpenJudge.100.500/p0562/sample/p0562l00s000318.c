#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    c=b/a;
    if(b%a>0)c++;
    printf("%d\n",c);
    return 0;
}