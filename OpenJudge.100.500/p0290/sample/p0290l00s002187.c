#include <stdio.h>

int main(){

  int i;
  int j;
  int n;
  int array[10000];
  int count=0;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
  scanf("%d",&array[i]);
  }

  for(i=0;i<n;i++){
    if(array[i]==2) count++;

    else{
      for(j=2;j<array[i];j++){
	if(array[i]%j==0) break;
      }
      if(j==array[i]) count++;
   }
  }
  
  printf("%d\n",count);
  
  return 0;
}