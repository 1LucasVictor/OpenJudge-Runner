#include<stdio.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <math.h>
int main(){
  int X,Y;
  scanf("%d %d", &X, &Y);
  double sum =(double)((4*X)-Y) / 2 ;
    if(ceil(sum ) != floor(sum )){
      printf("No\n");
      } else if (sum < 0){
        printf("No\n");
      } else{
        printf("Yes\n");
      }
     // printf("%lf\n",sum );
  return 0;
}