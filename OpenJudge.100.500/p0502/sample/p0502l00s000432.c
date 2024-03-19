#include<stdio.h>
int main(void){
  int l,i;
  scanf("%d",&l);
  int num[l];
  for(i=0;i<l;i++){
    scanf("%d",&num[i]);
    if(num[i]%2==0){
      if(num[i]%3!=0&&num[i]%5!=0){
        printf("DENIED");
        return 0;
      }
    }
  }
  printf("APPROVED");
  return 0;
}