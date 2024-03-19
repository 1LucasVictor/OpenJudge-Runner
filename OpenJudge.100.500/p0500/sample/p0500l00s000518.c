#include <stdio.h>
#include <math.h>
int main(){
  int n,m,s,c,ans=0,a[3]={-1,-1,-1};
  scanf("%d%d", &n, &m);
  if(m==0){ printf("0\n"); return 0; }
  
  for(int i=0; i<m; i++){
    scanf("%d%d", &s, &c);
    if	   ( a[s-1]==-1 ){ a[s-1]=c; }
    else if( a[s-1]!= c ){ printf("-1\n"); return 0; }
  }
  for(int i=0; i<n; i++){ if( a[i]==-1 ){ a[i]=0; } }
  ans += (a[0] * (int)pow(10,2));
  ans += (a[1] * (int)pow(10,1));
  ans += (a[2] * (int)pow(10,0));
  if( ans==0 ){ printf("-1\n");   }
  else		  { printf("%d",ans); }
  return 0;
}