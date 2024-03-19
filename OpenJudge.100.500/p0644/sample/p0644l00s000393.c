#include<stdio.h>
int main(void){
  int sum=0;
  char b[5];
  scanf("%s",b);
  for(int i=0;i<3;i++){
    if(b[i]=='1'){
      sum++;
    }
  }
  printf("%d\n",sum);
  return 0;
}
