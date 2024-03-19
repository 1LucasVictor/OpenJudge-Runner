#include<stdio.h>
#include<stdlib.h>
int main(){
  int a,b,k;
  int i;
  scanf("%d %d %d",&a,&b,&k);
  int *sosuu;
  sosuu=malloc(k*sizeof(int));
  int max;
  if(a>b)
    max=a;
  else
    max=b;
  int count=0;
  for(i=1;i<max;i++){
    if(a%i==0&&b%i==0)
      sosuu[count++]=i;
    if(count==k)
      break;
  }
  printf("%d",sosuu[count-1]);
    	
  return 0;
}