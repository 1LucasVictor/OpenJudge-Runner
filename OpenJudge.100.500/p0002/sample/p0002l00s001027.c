#include <stdio.h>

int main(){
  int count;
  int a[3];
  int max, maxidx;
  int i, j;

  scanf("%d", &count);
  for(i=0; i<count; i++){
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    max=0;
    for(j=0; j<3; j++){
      if(max<a[j]){
         max=a[j];
         maxidx=j;
      }
    }
    max=max*max;
    a[maxidx]=0;
    for(j=0; j<3; j++){
       max-=a[j]*a[j];
    }
    if(max==0) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}