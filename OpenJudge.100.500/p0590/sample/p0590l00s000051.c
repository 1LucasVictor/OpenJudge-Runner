#include<stdio.h>

int main() {
  int an[5],k;
  scanf("%d%d%d%d%d",&an[0],&an[1],&an[2],&an[3],&an[4]);
  scanf("%d",&k);

if(an[4]-an[0] <= k)printf("Yay!");
else printf(":(");

  return 0;
}
