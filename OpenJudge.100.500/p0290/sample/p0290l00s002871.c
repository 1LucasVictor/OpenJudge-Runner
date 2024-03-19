#include <stdio.h>
#include <math.h>

#define MAX 10000

int main(void){

  int A[MAX];
  int i,j;
  int count=0;
  int flag;
  int n=0;
  
  scanf("%d",&count);
  for(i=0;i<count;i++)
    scanf("%d",&A[i]);
  
  for(i=0;i<count;i++){
    flag=0;
    for(j=1;j<=A[i];j++){
      if(A[i] % j == 0)
	flag++;
      if(flag==3)
	break;
    }
    if(flag==2)
      n++;
  }
  printf("%d\n",n);

  return 0;

}