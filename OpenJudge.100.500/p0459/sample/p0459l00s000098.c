//Hiia
#include <stdio.h>
#include <stdlib.h>//rannsuu
#include <time.h>
//srand((unsigned int) time(0));
#include <math.h>//koudona keisann
#include <string.h>//hairetsu
//#define N

//scanf("\n", );
//printf("\n", );

//long n,s;
//scanf("%ld %ld", &n, &s);

//for(i = 0; i < N; i++) {

//long long a [100010];
//for(int i=0;i<n;i++) scanf("%lld",&a[i]);


int main(){
  int X, Y, n;
  scanf("%d%d", &X,&Y);
  if(4*X-Y % 2 == 1){
    printf("No\n");
  }
  n=(4*X-Y)/2;
  if(0<=n || n<=X){
    printf("Yes\n");
  }
  if(0>n || n>X){
    printf("No\n");
  }
  



  return 0;
}
