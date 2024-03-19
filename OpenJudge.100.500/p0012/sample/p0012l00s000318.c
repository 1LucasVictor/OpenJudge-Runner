#include<stdio.h>
int main(){
  int n, i, data[10]={0}, x=0;
  while((scanf("%d", &n)) != EOF){
    if(n == 0){
      printf("%d\n", data[x]);
      x--;
    }else if(1<=n && n<=10){
      x++;
      data[x] = n;
    }
  }
  return 0;
}