#include<stdio.h>

int main(){
  int n,max = -1000000,min = 1000000,sum = 0;
  scanf("%d",&n);
  int data[n];
  if(n>0&&n<=10000){
    for(int i=0;i<n;i++){
      scanf("%d",& data[i]);
      if(data[i]>=-1000000&&data[i]<=1000000){
        if(max < data[i]){
          max = data[i];
        }
        if(min > data[i]){
          min = data[i];
        }
        sum += data[i];
      }
    }
  }
  printf("%d %d %d\n",min,max,sum);
  return 0;
}