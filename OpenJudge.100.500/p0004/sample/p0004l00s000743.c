#include<stdio.h>

int main(){
  int a, b, n, gcd, lcm, i, stock, x, y, sum, end;
  sum = 1;


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

    end = 2000000000;


    while(1){
      for(i = 2; i <= end; i++){
	if(a % i == 0 && b % i == 0){
	  sum *= i;
	  a /= i;
	  b /= i;
	  continue;
	}
	end = a * b;
      }
      sum *= a;
      sum *= b;
      lcm = sum;
      break;
    }
    printf("%d %d\n",gcd,lcm);
    sum = 1;
  }

  return 0;
}