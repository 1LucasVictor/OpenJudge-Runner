#include<stdio.h>
int main(){
  int n, i, data[10], x=0;;
  while((scanf("%d", &n)) != EOF){
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