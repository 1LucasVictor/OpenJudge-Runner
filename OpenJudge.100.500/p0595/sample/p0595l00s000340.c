#include<stdio.h>
int main(void){
int i=0,a,b,k,n;
scanf("%d%d%d",&a,&b,&k);
if(a>=b) n=a/2+1;
else n=b/2+1;
while(i!=k){
n--;
if(a%n==0)i++;
}
printf("%d",n);
return 0;
}