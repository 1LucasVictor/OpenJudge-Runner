#include<stdio.h>
int main()
{
int a,b[10],j=0;
for(int i=0;i<10;i++) b[i]=0;
scanf("%d",&a);
for(int i=1;i<10;i++) {
	if(a%i==0) b[0]=i;}
for(int i=1;i<10;i++){
	if((a/b[0])%i==0) b[1]=i;}
if(b[0]*b[1]==a) printf("Yes\n");
else printf("No\n");
return 0;
}
