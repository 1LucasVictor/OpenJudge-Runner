#include <stdio.h>
#define MAX 100
int main(){

  int key,i,j,n,c;
  int arry[MAX];

  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arry[i]);
  
  for(i=0;i<n;i++)
    printf("%-2d ",arry[i]);

  printf("\n");
  
  for(i=1;i<n;i++){
    key=arry[i];
    j=i-1;
    while(j>=0 && arry[j]>key ){
      arry[j+1]=arry[j];
      j--;
      arry[j+1]=key;
    }
    for(c=0;c<n;c++)
      printf("%-2d",arry[c]);
    printf("\n");
  }
  return 0;
}