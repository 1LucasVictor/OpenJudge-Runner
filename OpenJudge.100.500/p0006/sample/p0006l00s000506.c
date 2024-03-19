#include<stdio.h>

int main(){
  int loan=100000;
  double d = 1.05;
  int n,i,temp;
  scanf("%d", &n);
  for(i=0;i<n;i++){
      loan = (double)loan * d;
      temp = loan%1000;
      if(temp != 0){
        loan = loan - temp + 1000;
      }
  }
  printf("%d\n",loan);

  return 0;
}

