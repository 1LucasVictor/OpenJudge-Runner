#include<stdio.h>

int main(){
  int a, b, n, gcd, lcm, i;

  while(scanf("%d %d",&a,&b) != EOF){
    //Ååöñ
    if(a < b){
      n = a;
    }else{
      n = b;
    }

    for(i = n; i > 0; i--){
      if(a % i == 0 && b % i == 0){
	gcd = i;
	break;
      }
    }

    //Å¬ö{
    if(a > b){
      n = a;
    }else{
      n = b;
    }
    for(i = n;; i++){
      if(i % a == 0 && i % b == 0){
	lcm = i;
	break;
      }
    }

    printf("%d %d\n",gcd,lcm);
  }

  return 0;
}