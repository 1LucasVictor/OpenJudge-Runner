#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    if(a%b==0)
    printf("%d",a/b);
    else
    printf("%d",a/b+1);
return 0;
}