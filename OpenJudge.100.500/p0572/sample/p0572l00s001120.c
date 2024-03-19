#include<stdio.h>
int main()
{
long int l,r,min1,min2,i,k;
  min1=2019;
  min2=2019;
  scanf("%ld %ld",&l,&r);
  if(r-l>=2019) printf('0');
  else{
  for(i=l;i<=r;++i)
  {
  if(i%2019 <min2 && i%2019 > min1) min2=i%2019;
  else if(i%2019<=min1) {min2=min1;
                         min1=i%2019;}
  }
  printf("%ld",min1*min2);
  }
return 0;}