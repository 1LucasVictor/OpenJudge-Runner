#include<stdio.h>
int Prime(int);
int main(){
  int total,i,number,count=0;
  scanf("%d",&total);
  for(i=0;i<total;++i){
    scanf("%d",&number);
    if(Prime(number)){
        ++count;
      }
  }
  printf("%d\n",count);
  return 0;
}
int Prime(int number){
  int i;
  if(number<2){
    return 0;
  }
  for(i=2;i*i<=number;++i){
    if(number%i==0){
      return 0;
    }
  }
  return 1;
}

