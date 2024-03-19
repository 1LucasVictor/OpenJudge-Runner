#include <stdio.h>

int main(void)
{
  int n[5],i,k,t,j;

  for(i=0;i<5;i++){
    scanf("%d\n",&n[i]);
  }
  scanf("%d\n",&k);

  for(i=4;i>=1;i--){
    for(j=i-1;j>=0;j--){
      t=n[i]-n[j];
      if(t>k){
        printf(":(");

        return 0;
      }
    }
  }

  printf("Yay!");

  return 0;
}
