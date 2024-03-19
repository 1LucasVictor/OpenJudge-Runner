#include<stdio.h>
int main(void){
    int a,b,n,i;
    a=100000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a=a+a*0.05;
        b=a%1000;
        if(b!=0){
            a=a+1000;
            a=a-b;
        }
    }
    printf("%d\n",a);

return 0;
}