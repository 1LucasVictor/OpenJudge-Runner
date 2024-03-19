#include <stdio.h>
int n, k, w[100010];
int a(int P);
int main(){
  int i,l=0,h =1000100000,m;
  scanf("%d%d",&n,&k);
  for( i=0; i<n; i++){
    scanf("%d",&w[i]);
  }
  while(l+1 < h){
     m = (l+h)/2;
    if(a(m)){
      h = m;
    }
    else{
      l = m;
    }
  }
  printf("%d\n", h);
}
int a(int P){
  int x = 0, y = 1,i,j;
  for( j=0; j<n; j++){
    if(w[j] > P){
      return 0;
    }
    else{
      if(x+w[j] <= P){
    x += w[j];
      }
      else{
    y++;
    x = w[j];
      }
    }
  }
  if(y<=k) return 1;
  else return 0;
}
