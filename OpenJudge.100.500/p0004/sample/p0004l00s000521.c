#include<stdio.h>

int main(){
  int a, b, n, gcd, lcm, i, stock, x, y;


  while(scanf("%d %d",&a,&b) != EOF){
    //Ååöñ

    if(a < b){
      stock = a;
      a = b;
      b = stock;
    }
      x = a;
      y = b;


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

    lcm = (a / gcd) * b;
    printf("%d %d\n",gcd,lcm);
  }

  return 0;
}