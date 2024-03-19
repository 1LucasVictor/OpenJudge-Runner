#include<stdio.h>
#include<stdlib.h>

int main(){

  int n, q, *time, i, tsam=0, cnt=0,j;
  char *name[50000];

  scanf("%d%d",&n, &q);

  time = (int *)malloc(sizeof(int)*n);
  for(i=0; i<=n-1; i++){
    name[i] = (char *)malloc(sizeof(char)*n);
  }
  for(i=0; i<=n-1; i++){
    scanf("%s%d",name[i], &time[i]);
  }

  while(cnt != n){
    for(i=0; i<=n-1; i++){
      if(time[i] <=q && time[i] > 0){
        tsam += time[i];
        time[i] = 0;
        printf("%s %d\n",name[i], tsam);
        cnt++;
      }
      else if(time[i] > q){
        time[i] = time[i] - q;
        tsam += q;
      }
    }
    }
  return 0;
}
