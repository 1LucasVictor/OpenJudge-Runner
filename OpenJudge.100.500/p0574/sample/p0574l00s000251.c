#include<stdio.h>
int main(void){
  int s;
  scanf("%d",&s);
  int s1=s/10;
  int s2=s/100;
  int s3=s/1000;
  if((s%10)==(s1%10)||(s1%10)==(s2%10)||(s2%10)==(s3%10)||(s%10)==(s3%10)){
      printf("Bad");
  }else{
    printf("Good");
  }
  return 0;
}
