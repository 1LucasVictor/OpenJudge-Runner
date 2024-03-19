#include<stdio.h>
int main()
{int i,n,m,a[n];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++){
if(a[0]==a[i]){
 printf("NO\n");break;}
if(a[0]!=a[i]) {
printf("YES\n");break;}}
return 0;
}