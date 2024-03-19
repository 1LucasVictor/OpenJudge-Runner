#include<stdio.h>
int main(){
  int n, i, data[10], x=0;;
  for(i=0;i<100;i++){
    scanf("%d", &n);;
    if(n == 0){
      printf("%d\n", data[x]);
      data[x] = '\0';
      x--;
    }else if(1<=n && n<=10){
      x++;
      data[x] = n;
    }
    if(x==0){
      break;
    }
  }
  return 0;
}