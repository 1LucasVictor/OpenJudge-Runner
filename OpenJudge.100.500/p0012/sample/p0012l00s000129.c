#include<stdio.h>
int data[100], out[100];
int i = 0, k = 0;
int top(){
  return data[i - 1];
}
void pop(){
  i--;
}

int main(){
  int a;
  while(scanf("%d", &data[i]) != EOF){
  if(data[i] != 0){
      i++;
    }else{
      out[k] = top() ;
      k++;
      pop();
    }
  }
  for(a = 0; a < k; a++){
    printf("%d\n",out[a]);
  }
  return 0;
}