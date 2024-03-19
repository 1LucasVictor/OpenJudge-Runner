#include <stdio.h>
  
int main(void) {
    int a,b,c,i;
    int cnt;
    scanf("%d %d %d\n", &a, &b, &c);
    for(i=a,cnt=0;i<=b;i++) {
        if(c%i==0) cnt ++;
    }
    printf("%d\n", cnt);
      
    return 0;
}