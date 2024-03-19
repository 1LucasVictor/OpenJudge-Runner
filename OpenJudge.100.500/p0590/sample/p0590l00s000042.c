#include<stdio.h>
int main()
{
int a[5],max,min,i,b;
  min=123;
  max=0;
for(i=0;i<5;++i)
 {scanf("%d",&a[i]);
  if(a[i]>max) max=a[i];
  if(a[i]<min) min=a[i];
 }
scanf("%d",&b);
  
if(max-min>b) printf(":(");
else printf("Yay!");
return 0;
}