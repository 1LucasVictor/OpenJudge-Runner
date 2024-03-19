#include <stdio.h>

int main(void){
  int i,j;
  int n;
  int numbers[1000000]={1,1};
  int temp=0;
  
  while(scanf("%d",&n)!=EOF){
      for(i=2;i<=n/2;i++){
          for(j=2;j<=n/i;j++){
              numbers[i*j]+=1;
          }
      }
      for(i=0;i<=n;i++){
          if(numbers[i]==0) temp+=1;
      }
      printf("%d\n",temp);
      temp=0;
  }
  
  return 0;
}



