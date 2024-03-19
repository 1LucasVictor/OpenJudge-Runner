#include <stdio.h>

int main(){
  int i,j,k;
  int flag = 0;
  int s[5];
  for(i=0;i<5;i++){
    scanf("%d",&s[i]);
  }
  scanf("%d", &k);
  
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
  	  if((s[i]-s[j])>((-1)*k)&&(s[i]-s[j])<k){
      }else{
        flag += 1;
      }
    }
  }
  if(flag == 0){
    printf("Yay!");
  }else if(flag != 0){
    printf(":(");
  }
  
  return 0;
}