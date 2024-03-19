#include <stdio.h>

int main(){

  int a,i;

  scanf("%d",&a);

  int b[a];

  for(i=1;i<=a;i++){

    scanf("%d",&b[i-1]);

  }

  int max=b[0],min=b[0],sum=b[0];

  for(i=1;i<=a-1;i++){

    if(max<b[i])
      max=b[i];
    if(min>b[i])
      min=b[i];

    sum += b[i];

  }

  printf("%d %d %d\n",min,max,sum);

  return 0;

}