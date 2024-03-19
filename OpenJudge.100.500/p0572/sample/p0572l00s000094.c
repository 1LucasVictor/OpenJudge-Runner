#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
  int l;
  int r;
  scanf("%d", &l);
  scanf("%d", &r);
  int p = l % 2019;
  //printf("\n%d", p);
  int q = r % 2019;
  //printf("\n%d", q);
  //printf("\n%d", p*q%2019);
  int min = 10000000;
  int i = 0;
  int j = 0;
  int ans = 0;
  for(i=l;i<r-1;i++){
    for(j=i+1;j<=r;j++){
      //printf("\n%d", i);
      //printf("\n%d", j);
      if(i%2019==0||j%2019==0){
        printf("%d", 0);
        return 0;
      }
      ans = ((i % 2019) * (j % 2019)) % 2019;
      //printf("\n%d", ans);
      if(ans < min){
        min = ans;
      }
    }
  }
  printf("\n%d", min);
}