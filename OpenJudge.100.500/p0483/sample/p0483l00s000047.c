#include<stdio.h>

int main(void)
{
  int N,a,b,c;
  //read
  scanf("%d",&N);
  //check
  a = N/100;
  b = (N-a*100)/10;
  c = N%10;
  //write
  //printf("%d,%d,%d,%d",N,a,b,c);
  if(a-7==0||b-7==0||c-7==0)
  {
	printf("Yes");
   }else{
  	printf("No");
  }
  return 0;
  

}