#include <stdio.h>

int main(void){
  int a,b,c;
  int n,i;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d%d",&a,&b,&c);
    a=a*a;
    b=b*b;
    c=c*c;
    if(a==b+c){printf("YES\n");continue;}
    else if(b==a+c){
      printf("YES\n");continue;
    }
    else if(c==a+b){
      printf("YES\n");continue;
    }
    printf("NO\n");
  }
  return 0;
}