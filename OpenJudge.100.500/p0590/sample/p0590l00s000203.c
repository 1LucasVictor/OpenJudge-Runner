#include <stdio.h>
 
int main(){
  int i,k;
  int s[5];
  for(i=0;i<5;i++){
    scanf("%d",&s[i]);
  }
  scanf("%d", &k);
  
  if((s[4]-s[3])<=k){
    printf("Yay!");
  }else{
    printf(":(");
  }
  return 0;
}