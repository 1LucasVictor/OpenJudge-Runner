#include <stdio.h>

int main(){
  int a,b,c,n;

  scanf("%d",&n);

  while(n--){
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if( a*a + b*b == c*c ||
        b*b + c*c == a*a ||
        c*c + a*a == b*b){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}