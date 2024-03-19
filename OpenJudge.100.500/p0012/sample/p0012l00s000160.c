#include<stdio.h>

#define STACK_SIZE 11              /* スタックに積むことのできるデータの最大個数　*/

int stack_data[STACK_SIZE];        /* スタックの本体　*/
int stack_num = 0;                 /* スタック内のデータ数　*/

/* 関数　*/
int pop();

int main(){
  int n,ans;
  while(scanf("%d",&n)!=EOF){
    if(n==0){
      ans = pop(n);
      printf("%d\n",ans);
    } else{
      stack_data[stack_num] = n;
      stack_num++;
    }
  }
  return(0);
}
int pop(){
  int ans;
  stack_num--;
  ans = stack_data[stack_num];
  return ans;
}