#include<stdio.h>
int main()
{
int a,j,d;
scanf("%d",&a);
int b[a-1],c[a];
for(j=0;j<a;++j){
 c[j]=0;
 }
for(j=0;j<a-1;++j)
 {scanf("%d",&b[j]);
  d=b[j];
  c[d-1]=c[d-1]+1;
 }

for(j=0;j<a;++j){
 printf("%d\n",c[j]);
 }
  
return 0;
}