#include <stdio.h>

int N;
#define MAX 100
int a[MAX][MAX];

int main(){
  int i,j,count,num,head;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&head);
    scanf("%d",&count);
  if(count == 0)continue;
  else for(j=0;j<count;j++){
      scanf("%d",&num);
      a[head-1][num-1] = 1;
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(i==N-1&&j==N-1){
        printf("%d\n",a[i][j]); break;
      }
      else printf("%d ",a[i][j]);
    }
    printf("\n");
  }
return 0;

}