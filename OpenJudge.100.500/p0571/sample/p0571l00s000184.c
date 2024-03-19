#include <stdio.h>

int main(){
  int d[3];
  scanf("%d%d%d",&d[0],&d[1],&d[2]);

  int buf = d[0]*d[1];
  int buff = d[2];

  if(buf<buff) printf("%d\n",buf);
  else printf("%d\n",buff);

  return 0;
}
