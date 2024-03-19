#include<stdio.h>

int main(){
  int i;
  int n;
  int s = 100000;
  int r = 0;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    r = s * 0.05;
    s = s + r;
    if(s % 1000 != 0){
      s = s - s % 1000 + 1000;
    }
  }
  
  printf("%d\n",s);

}