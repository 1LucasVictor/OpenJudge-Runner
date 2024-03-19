#include<stdio.h>

void run(void){
  int n;
  scanf("%d",&n);
  while(n--){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a*=a;
    b*=b;
    c*=c;
    printf("%s\n",(a==b+c || b==c+a || c==a+b)?"YES":"NO");
  }
}

int main(void){
  run();
  return 0;
}
