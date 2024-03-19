#include <stdio.h>


int calc_gcd(int a, int b){
  int r = a%b;
  while(r>0){
	a=b;
	b=r;
	r = a%b;
  }
  return b;
}

int gcd(int a, int b){
  if(a>b){
	return calc_gcd(a,b);
  } else {
	return calc_gcd(b,a);
  }
}

int main(){
  int a,b,g;
  while(scanf("%d %d",&a,&b)!=EOF){
	g=gcd(a, b);
	printf("%d %ld\n", g, (long)a*b/g);
  }
  return 0;
}