#include <stdio.h>
int main(){
  int n;
  int number[10000];
  int i;
  int j;
  int count=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&number[i]);
  }

  for(i=0;i<n;i++){
    if(number[i] != 1){
        for(j=2;j<number[i];j++){
        if(number[i] % j == 0) count++;
        }
      }     
  }
  printf("%d\n",count);

  return 0;
}

