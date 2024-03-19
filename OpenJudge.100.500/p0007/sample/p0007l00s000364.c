
#include <stdio.h>
int main(void) {
  int a,b,c,n,i;
  while(scanf("%d",&n)!=EOF){
    i=0;
    for(a=0;a< 10;a++)
      for(b=0;b< 10;b++)
	for(c=0;c< 10;c++) {
	  i+=0<=n-a-b-c && n-a-b-c< 10;
	}
    printf("%d\n",i);
  }
  return 0;
}