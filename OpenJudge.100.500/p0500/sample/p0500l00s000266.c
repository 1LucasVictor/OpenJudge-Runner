#include <stdio.h>
int main(){
  int n,m,s,c,tmp,ans=0,a[3]={-1,-1,-1};
  scanf("%d%d", &n, &m);
  if(m==0){ printf("0\n"); return 0; }
  
  for(int i=0; i<m; i++){
    scanf("%d%d", &s, &c);
    if	   ( s > n ){ printf("-1\n"); return 0; }
    if	   ( a[s-1]==-1 ){ a[s-1]=c; }
    else if( a[s-1]!= c ){ printf("-1\n"); return 0; }
  }
  for(int i=0; i<3; i++){ if( a[i]==-1 ){ a[i]=0; } }
  if	 ( n==3 ){ ans = a[0]*100 + a[1]*10 + a[2]*1; }
  else if( n==2 ){ ans = a[0]* 10 + a[1]* 1; }
  else if( n==1 ){ ans = a[0]*  1; }
  
  if( ans==0 && (m==3 || m==2) ){ printf("-1\n");   }
  else		  { printf("%d\n",ans); }
  return 0;
}