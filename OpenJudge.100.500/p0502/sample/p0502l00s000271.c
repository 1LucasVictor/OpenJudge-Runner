#include<stdio.h>
int main(){
  int hm,num[100];
  int i,gu=0,ap=0;
  
  scanf("%d",&hm);
  for(i=0;i<hm;i++){
    scanf("%d",&num[i]);
  } //ここまで初期化
  
  for(i=0;i<hm;i++){
    if(num[i]%2==0){
      gu++;
      if(num[i]%3==0 || num[i]%5==0){
        ap++;
      }
    }
  }
  
  //printf("ぐ:%d 3,5:%d\n",gu,ap); //DEBUG
  
  if(gu==ap)
    printf("APPROVED");
  else
    printf("DENIED");
  
  return 0;
}