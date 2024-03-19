#include<stdio.h>
int main(void){
    int a, b, c;
    scanf("%d%d",&a,&b);
    c=b/a;
    if(b%a==0) c+=0;
    else c+=1;
    printf("%d\n",c);
    return 0;
}