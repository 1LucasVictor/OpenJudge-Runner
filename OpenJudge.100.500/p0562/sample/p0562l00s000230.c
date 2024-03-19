#include<stdio.h>
int main(void){
    int a, b, c, d;
    scanf("%d%d",&a,&b);
    c=b/a;
    d=b%a; 
    if(d!=0) c+=1;
    printf("%d\n",c);
    return 0;
}