#include <stdio.h>
int main(){
int a,b,k;
int i =1;
scanf("%d",&k);
scanf("%d %d",&a,&b);
if(a%k == 0||b%k == 0)printf("OK");
else if (b-a >= k)printf("OK");
else printf("NG");
}