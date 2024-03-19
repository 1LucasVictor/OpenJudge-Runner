#include<stdio.h>
int data[100], x=0;
void push(int n){
  x++;
  data[x] = n;
}
void toppop(){
  printf("%d\n", data[x]);
  data[x] = '\0';
  x--;
}
int main(){
  int n, i;
  for(i=0;i<100;i++){
    scanf("%d", &n);;
    if(n == 0){
      toppop();
    }else{
      push(n);
    }
    if(x==0){
      break;
    }
  }
  return 0;
}