#include<stdio.h>
int main()
{
    long int h,a;
    long int count=0;
    scanf("%ld%ld",&h,&a);
    count=(h/a);
  	if(h%a!=0)
      count++;
    printf("%ld\n",count);
    return 0;
}