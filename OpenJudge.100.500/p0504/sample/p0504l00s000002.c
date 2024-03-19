#include<stdio.h>
int main()
{
  long int h,a,i;
  scanf("%ld",&h);
  scanf("%ld",&a);
  for(i=0; ;i++)
  {
    h=h-a;
    if(h<=i || h==0)
    {
      printf("%ld",(i+1));
      break;
  	}
  }
  
}