#include <stdio.h>
#include <stdlib.h>

#define Max(a,b) (a<b ? b : a)

int main(void){
  int n,i,j,MP;
  scanf("%d",&n);
  int* Rate=(int*)malloc(sizeof(int)*n);
  if(Rate==NULL)exit(0);
  for(i=0;i<n;i++){
    scanf("%d",&Rate[i]);
    if(i==0)continue;
    for(j=0;j<i;j++){
      MP=Max(MP,Rate[i]-Rate[j]);
    }
  }
  printf("%d\n",MP);
  free(Rate);
  return 0;
}