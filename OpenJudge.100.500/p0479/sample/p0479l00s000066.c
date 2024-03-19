#include<stdio.h>
 
int main(void){
  int N;
  int b,i;
  int a[20001] = {0};
  
  scanf("%d",&N);
  for(i=2;i<=N;i++){
    scanf("%d",&b);
    a[b]++;
  }
 for(i=1;i<=N;i++){
 printf("%d\n",a[i]);
 }

}
 