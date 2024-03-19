#include<stdio.h>

void gcd(int *, int *);

int main(){
  int gcd = 1, a, b, i, number, temp;

  scanf("%d%d",&a,&b);
  
  if(a < b){
    temp = a;
    a = b;
    b = temp;
  }
    while(b > 0){
      number = a % b;
      a = b;
      b = number;
    }
    
    printf("%d\n", a);

    return 0;
}