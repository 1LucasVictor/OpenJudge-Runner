#include <stdio.h>
#include<math.h>

#define N 10000
#define TRUE 0
#define FALSE -1

int prime(int);

int main(){
  int n,num[N],i,j,flag=0,count=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&num[i]);
  }

  for(i=0;i<n;i++){
    if(prime(num[i])==TRUE) count++;
  }
  printf("%d\n",count);
  return 0;
}

int prime(int num){
  int i=3;
  if(num==2) return TRUE;

  if(num<2 || num%2==0) return FALSE;

  while(i<=sqrt((double)num)){
    if(num%i==0) return FALSE;
    i=i+2;
  }

  return TRUE;
}