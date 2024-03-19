#include <stdio.h>
#define n 100
int b;
int p(int m){
  if(m<2) b=b+0;
  else if(m==2) b++;
  else if(m%2==1) b++;
}

int main(){
  int i,cnt,a[n];
  scanf("%d",&cnt);
  for(i=0;i<cnt;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<cnt;i++){
    p(a[i]);
  }
  printf("%d\n",b);
  return 0;
}