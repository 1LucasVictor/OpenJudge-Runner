#include<stdio.h>
int main(){
  int a;
  int b[4];
  scanf("%d",&a);
  for(int i=3;i>=0;i--){
    b[i]=a%10;
    a=a/10;
  }
  for(int i=0;i<3;i++){
    if(b[i]==b[i+1]){
      printf("Bad");
      return 0;
    }
  }
  printf("Good");
  return 0;
}
