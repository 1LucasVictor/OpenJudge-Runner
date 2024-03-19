#include<stdio.h>
int main(){
 int a,b;
 scanf("%d%d",&a,&b);
 int ans=b/a;
 if(b%a!=0)ans++;
 printf("%d\n",ans);
return 0;}