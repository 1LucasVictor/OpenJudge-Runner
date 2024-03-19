#include <stdio.h>

int lng(int x){
  int cnt=0;
  while(x>0){
    cnt++;
    x=x/10;
  }
  return cnt;
}

int main(void){
  int a, b, ans;
  int a_lng, b_lng;
  char s[20]="";

  while((scanf("%d %d", &a, &b))!=EOF){
    a_lng=lng(a);
    b_lng=lng(b);

    if(0>a || b>1000000 || a_lng>200 || b_lng>200){
      printf("error\n");
      return 0;
    }

    ans=a+b;
    printf("%d\n",  lng(ans));
  }
}