#include <stdio.h>

int main(void){

  int n,d,x,y,i,count;

  count = 0;

  scanf("%d %d",&n,&d);

  for(i=1;i<=n;i++){

      scanf("%d %d",&x,&y);

      if((x*x+y*y)<=(d*d)){

	count = count + 1;

      }

  }

  printf("%d\n",count);

  return 0;

}
