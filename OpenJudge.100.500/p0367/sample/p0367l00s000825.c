#include <stdio.h>
int a,b,c;
int count;
int i;
int main(void) {
  scanf("%d %d %d",&a,&b,&c);
  for(i=a;i<b+1;i++) {
    if(c%i == 0) {
      count++;
    }
  }
  printf("%d\n",count);

return 0;
}