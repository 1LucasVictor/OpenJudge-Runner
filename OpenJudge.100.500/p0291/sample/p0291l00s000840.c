#include <stdio.h>

int main(){
  int n,r[200000],max,i,j;

  scanf("%d",&n);
  while(n<2||n>200000)  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&r[i]);
  }

  max=r[1]-r[0];
  for(j=1;j<n;j++){
    for(i=0;i<j;i++){
      if((r[j]-r[i])>max) max=r[j]-r[i];
    }
  }
  printf("%d\n",max);

  return 0;
}

