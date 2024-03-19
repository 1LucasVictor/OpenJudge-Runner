#include<stdio.h>
int main()
{
  int a,b,c,d,e,k,f,j,h,t,i,x,z,m,n,p;
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
  f=b-a;
  i=c-a;
  j=d-a;
  z=e-a;
  x=c-b;
  m=d-b;
  n=e-b;
  h=d-c;
  p=e-c;
  t=e-d;
  if(f<=k && i<=k && j<=k && z<=k && x<=k && m<=k && n<=k && h<=k && p<=k && t<=k){
    printf("Yay!");}
	
  else if(f>k || i>k || j>k || z>k || x>k || m>k || n>k || h>k || p>k || t>k){
    printf(":(");}
}
