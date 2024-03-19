#include<stdio.h>



int main(void){

  long long int a, b;
  long long int x, y;
  long long int m;
  long long int ans1, ans2;

  while(scanf("%lld %lld", &a, &b)!=EOF){
    if(a>b){
      x = a;
      y = b;
    }
    else{
      x = b;
      y = a;
    }

    
    while(x%y != 0){
      m = y;
      y = x%y;
      x = m;
    }

    ans1 = y;
    ans2 = (a/ans1)*b;
    printf("%lld %lld\n", ans1, ans2);
      
  }

  return(0);

}

