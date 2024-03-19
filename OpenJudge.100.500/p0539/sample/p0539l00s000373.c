#include<stdio.h>
int main(){
  int n;
  int c=0;
  scanf("%d",&n);
  int i,j;
  for(i=1;i<10;i++){
    for(j=1;j<10;j++){
      if(n==i*j)
	c++;
    }
  }

  if(c>0)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;}
