#include<stdio.h>
int main(void){
    int n,s=100000,a,b,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        s=s*1.05;
        a=s%1000;
        b=s/1000;
        if(a!=0){
            b=b+1;
        }
        s=b*1000;
    }
    printf("%d\n",s);
    return 0;
}