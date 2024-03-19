#include<stdio.h>

int main(){
  int a[5];
  for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  int k,f=1;
  scanf("%d",&k);
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(a[i]-a[j] > k){
        f=0;
      }
    }
  }
  if(f){
    printf("Yay!");
  }else{
    printf(":(");
  }

  return 0;
}