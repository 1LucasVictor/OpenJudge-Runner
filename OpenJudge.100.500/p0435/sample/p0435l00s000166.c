#include <stdio.h>

int main(void){

  int n,d,count;

  scanf("%d %d",&n,&d);

  int x,y;

  count = 0;

  for(int i=1;i<n+1;i++){

    scanf("%d %d",&x,&y);

    int l = x*x+y*y;

    if(l<=d*d){

      count += 1;

    }

  }

  printf("%d\n",count);

  return 0;

}
