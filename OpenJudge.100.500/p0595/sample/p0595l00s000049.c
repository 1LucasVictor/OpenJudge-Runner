#include <stdio.h>

int main() {
    int a,b,k;
    scanf("%d %d %d", &a, &b, &k);
  int count=0;
  int i;
  for(i=1;i<a+b;i++){
    if(a%i==0){
      if(b%i==0){
        count++;
        if(count==k){
          break;
        }
      }
    }
  }
    printf("%d", i);
    return 0;
}