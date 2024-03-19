#include<stdio.h>

int main(){
  int a, b, k, cnt=0, kth_divisible;
  scanf("%d %d %d", &a, &b, &k);
  
  for(int i=1; cnt<k; i++){
    if(a%i==0 && b%i==0){
      cnt++;
      kth_divisible = i;
//      printf("cnt %d  i %d\n",cnt, i);
    }
  }
  
  printf("%d", kth_divisible);

  return 0;
}