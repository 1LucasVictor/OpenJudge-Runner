#include<stdio.h>

int main(void){
int a,b,k,n,ans;

scanf("%d",&a); scanf("%d",&b);
if(a>b){
k=a; a=b; b=k;}

n=b%a;
while(n!=0){
b=a; a=n; n=b%a;
}

printf("%d\n",a);

return 0;
}

