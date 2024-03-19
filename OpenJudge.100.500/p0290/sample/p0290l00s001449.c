#include<stdio.h>
#define N 10000

int prime(int num,int n){
  int i;
    
    if(num<2)
      return 0;
    else if(num==2)
      return 1;

    if(num%2 == 0)
      return 0;

    for(i=3;i<=num/i;i+=2){
      if(num%i == 0)
	return 0;
    }
    return 1;



}


int main(void){

  int i, n=0;
  int num[N],A=0;

  scanf("%d",&n );

  for(i=0;i<n;i++)
    scanf("%d",&num[i]);
  for(i=0;i<n;i++)
  A= A + prime(num[i],n);

  printf("%d\n",A);

  return 0;
}


