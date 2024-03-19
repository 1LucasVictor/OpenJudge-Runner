#include<stdio.h>
int main(){
  int i,cnt,num1,num2,num3,temp=0;
  // num1=0;                                                                                                                                                                         
  //num2=0;                                                                                                                                                                          
  //num3=0;                                                                                                                                                                          
  scanf("%d",&cnt);
  for(i=0; i<cnt; i++){
    scanf("%d %d %d",&num1,&num2,&num3);
    if(((num1*num1)==((num2*num2)+(num3*num3))) || ((num2*num2)==((num1*num1)+(num3*num3))) || ((num3*num3)==((num1*num1)+(num2*num2)))){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}