#include <stdio.h>
#include <math.h>
int abs(int n){
    if(n > 0){
        return n;
    } else {
        return -n;
    }
}


int main(){
  int a, b, k;
  scanf("%d %d %d", &a, &b, &k);
  int count = 0, i = 1;
  while(count < k){
    if(a%i==0 && b%i==0){
        count++;
       // printf("%d ", i);
    }
    i++;
  }
  
  printf("%d", i-1);
  
  return 0;
} 
