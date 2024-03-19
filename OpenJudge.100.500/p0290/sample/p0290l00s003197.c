#include <stdio.h>
int main(void){

  int n,a[10000],i,j,count=0;

  scanf("%d",&n);
  for(i=0; i < n; i++){
    scanf("%d",&a[i]);
    if(a[i]==2){
      count++;
      continue;
    }
    else{
      for(j = a[i]-1; j >= 1; j--){
        if(j == 1) count++;
        if(a[i] % j == 0) break;

      }
    }
  }


  printf("%d\n",count);
  return 0;
}