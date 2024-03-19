#include<stdio.h>
int main(){
  int a,num[9999],i,j,jud=0,count=0;

  scanf("%d",&a);
  for(i = 0; i < a;i++){
    scanf("%d",&num[i]);
  }

  for(i = 0;i < a;i++){
    for(j = 2;j < 1000000000;j++){
      if(num[i] >= j && num[i]%j == 0)jud++;
    }
    if(jud == 1)count++;
    jud = 0;
  }
  printf("%d\n",count);
  return 0;
}