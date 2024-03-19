#include<stdio.h>
#define NUM 100

int main(){
  int n;
  int a[NUM];
  int ans = 0;
  /*入力*/
  scanf("%d",&n);
  for(int i = 0;i < n;i++){
    scanf("%d",&a[i]);
    if((a[i]%2 == 0)&&((a[i]%3 != 0)&&(a[i]%5 != 0))){
      ans = -1;
    }
  }
  if(ans == 0){
    printf("APPROVED\n");
  }
  else{
    printf("DENIED\n");
  }
  return 0;
}
