#include<stdio.h>

int main(){
  int a,b,k;
  int div[100];
  int count=0;
  scanf("%d %d %d",&a,&b,&k);

  int min=a;
  if(a>b) min=b;

  for(int i=1;i<=min;i++){
    if((a%i==0)&&(b%i==0)){
      div[count]=i;
      count++;
    } 
  }

  printf("%d\n",div[k-1]);

  return 0;
}
