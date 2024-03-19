#include<stdio.h>

int calculater(int s){
  int j;
  if(s == 2){
    return 1;
  }
   if(s%2 == 0){
      return 0;
    }
  for(j=3;j*j<=s;j++){
    if(s%j == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int i, n, s, count=0;

  scanf("%d", &n);

  for(i=0;i<n;i++){
    scanf("%d",&s);
    if(calculater(s) == 1) count++;
  }

  printf("%d\n",count);

  return 0;
}
      
  

