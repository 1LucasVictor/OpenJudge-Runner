#include<stdio.h>
int main(void){
  int S,s1,s2,s3,s4;
  scanf("%d",&S);
  s1=S/1000;
  s2=(S-s1*1000)/100;
  s3=(S-s1*1000-s2*100)/10;
  s4=(S-s1*1000-s2*100-s3*10);
  if(s1==s2 || s2==s3 || s3==s4){
    printf("Bad");
  }
  else{
    printf("Good");
  }
  return 0;
}