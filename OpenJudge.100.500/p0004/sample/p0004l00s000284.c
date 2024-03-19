#include<stdio.h>

int main(){
  int a, b, n, gcd, lcm, i, stock, x, y;

  while(scanf("%d %d",&a,&b) != EOF){
    //Ååöñ

    if(a < b){
      stock = x;
      x = y;
      y = stock;
    }else{
      x = a;
      y = b;
    }

    while(1){
      x = x % y;
      
      stock = x;
      x = y;
      y = stock;

      if(y == 0){
	gcd = x;
	break;
      }
    }

    //Å¬ö{
    if(a > b){
      n = a;
    }else{
      n = b;
    }
    for(i = n; i < 2000000000; i++){
      if(i % a == 0 && i % b == 0){
	lcm = i;
	break;
      }
    }

    printf("%d %d\n",gcd,lcm);
  }

  return 0;
}