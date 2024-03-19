#include<stdio.h>

int array[50];
int suretu(int);

int main(){
  int num;
  int i;

  for(i = 0;i < 50;i++){
    array[i] = -1;
  }

  scanf("%d",&num);
  printf("%d\n",suretu(num));

  return 0;
}

int suretu(int n){
  if(n == 0 || n == 1){
    return array[n] = 1;
  }
  if(array[n] != -1){
    return array[n];
  }

return array[n] = suretu(n - 1) + suretu(n - 2);
}

