#include <stdio.h>
int main(){
int a,b,k,s;
scanf("%d",&k);
scanf("%d %d",&a,&b);
while(a>0){
a -= k;
b -= k;}
if(a <= k && k <= b)printf("OK");
else printf("NG");
}