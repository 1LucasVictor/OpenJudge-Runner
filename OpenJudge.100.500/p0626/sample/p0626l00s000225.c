#include<stdio.h>
int main()
{
int a,b,j,d;
  scanf("%d %d",&a,&b);
  d=1;
  if(a>0) for(j=0;j<a;++j){d=d*100;}
  
  if( b!=0){
  printf("%d",b*d);}
  
  else {printf("%d",(b+1)*d);}

return 0;
}