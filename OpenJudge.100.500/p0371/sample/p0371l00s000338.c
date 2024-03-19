#include<stdio.h>

int main(void){


  int i,n;


  long int a,min = 1000000,max = -1000000,sum = 0;


  scanf("%d",&n);


  for(i = 1;i <= n;i++)


  {


    scanf("%ld",&a);


    if(a < min)


      min = a;


    if(a > max)


      max = a;


    sum += a;


  }


  printf("%ld %ld %ld\n",min,max,sum);


  return 0;


}


  