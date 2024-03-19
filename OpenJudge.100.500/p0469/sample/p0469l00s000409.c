#include <stdio.h>
int main(){
int a,b,k,i;
scanf("%d",&k);
scanf("%d %d",&a,&b);
for(i = 0;i <= k ;i++){
a += i;
a %= k;
if(a == 0) printf("OK");
break;}
 if(a%k == 0||b%k==0)printf("OK");
else if (b-a >= k)printf("OK");
else printf("NG");
}
