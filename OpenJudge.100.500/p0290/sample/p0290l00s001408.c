#include<stdio.h>
int jud(int);
int main(){
  int a,num[9999],i,count=0;

  scanf("%d",&a);
  for(i = 0; i < a;i++){
    scanf("%d",&num[i]);
  }
  for(i = 0;i < a;i++){
    count += jud(num[i]);
  }
  printf("%d\n",count);
  return 0;
}

int jud(int num){
  int i;
  if(num == 2)return 1;
  if(num % 2 == 0)return 0;

  for(i = 3;i <= num /i; i+=2)
    if(num % i == 0)return 0;
    return 1;
}