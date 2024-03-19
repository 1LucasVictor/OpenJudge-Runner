#include <stdio.h>
int main(void){
  int x,y;
  int k=4;
  int t=2;
  int i,j;
  int n=5;
  scanf("%d",&x);
  scanf("%d",&y);

  for(i=0;i<26;i++){
    for(j=0;j<51;j++){
      
      if(i*k+j*t==y&&i+j==x){
        printf("Yes");
        n=1;
        break;
      }
      }
  }
  if(n!=1){
    n=0;
  }
  if(n==0)
   printf("No");
  return 0;
  }