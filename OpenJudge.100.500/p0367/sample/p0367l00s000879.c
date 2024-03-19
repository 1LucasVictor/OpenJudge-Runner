#include<stdio.h>
int main(){
int a,b,c,x,y,n[10000],i=0,p=0,m,k;
scanf("%d %d %d",&a,&b,&c);
for(x=1;x<=c;x++)
{
   for(y=x;y<=c;y++)
   {
   if(c==x*y)
   {
    if(x==y)
	{
	n[i]=x;
	i++;
	}
	else
	{
   n[i]=x;
   i++;
   n[i]=y;
   i++;
   }
   }
   }
}
k=a;
for(a=k;k<=b;k++)
{
 for(m=0;m<=i-1;m++)
 {
  if(n[m]==k)
  {
  p++;
  }
 }
}
printf("%d\n",p);
return 0;
}
