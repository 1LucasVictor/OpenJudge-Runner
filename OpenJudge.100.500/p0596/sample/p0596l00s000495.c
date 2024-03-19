#include<stdio.h>
 
int main(void) {
  char s[100000];
  int i, a, b;
 
  scanf("%s", s);
 
  for( i=0; s[i]=='1' || s[i]=='0'; i++ ) {
    if(s[i]=='0') {
      a = a + 1;
    }
    else if(s[i]=='1') {
      b = b + 1;
    }
  }  
    if(a > b) printf("%d\n", b*2);
    else printf("%d\n", a*2);
 
    return 0;
}