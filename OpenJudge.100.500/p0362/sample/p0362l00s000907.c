#include<stdio.h>

int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(0 <= a&&100 > c){
    if(a < b&&b < c){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
  return 0;
}