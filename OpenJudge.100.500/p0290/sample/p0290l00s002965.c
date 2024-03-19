#include<stdio.h>
int cal(int);
int main(){
  int num,i,str1;
  scanf("%d",&num);
  int str[num];
  for( i=0;i<num;i++){
    scanf("%d",&str[i]);
    str1=cal(str[i]);
  }
  printf("%d\n",str1);
  return 0;
}
int cal(int num){
  int i,flag=0;
  static int str=0;
  if(num==1)flag=1;
  for(i=2;i<num;i++){
    if(num%i==0){
      flag=1;
    } 
  }
  if(flag==0){
  str++;
  }
  return str;
}

