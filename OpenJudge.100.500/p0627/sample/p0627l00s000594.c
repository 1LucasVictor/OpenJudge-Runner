#include<stdio.h>
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a+b>a-b&&a+b>a*b) printf("%d\n",a+b);
    if(a+b<a-b&&a-b>a*b) printf("%d\n",a-b);
    if(a*b>a-b&&a+b<a*b) printf("%d\n",a*b);
    else if(a+b==a*b||a+b==a-b) printf("%d\n",a+b);
    else if(a-b==a*b) printf("%d\n",a-b);
    else if(a==0&&b==0) printf("0\n");
    return 0;
}
