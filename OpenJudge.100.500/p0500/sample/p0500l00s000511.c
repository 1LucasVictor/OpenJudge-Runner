#include<stdio.h>
int main(void)
{
  int n,m;
  scanf("%d%d",&n,&m);
  int ans[n+1],tmp[n+1],flag=0;
 
  for(int i=0;i<=n;i++){
    ans[i]=0;
    tmp[i]=0;
  }
  for(int i=0;i<m;i++){
    int s,c;
    scanf("%d%d",&s,&c);
    //printf("%d %d\n",s,c);
    tmp[s]++;
    if(tmp[s]==1) ans[s]=c;
    else if(tmp[s]>1){
      if(ans[s]!=c){
        flag=1;
        break;
      }
    }
  }
  if(tmp[1]==0) ans[1]=1;
  if((tmp[1]>0) && (ans[1]==0) && (n>1)) flag=1;
  if(flag==1) printf("-1");
  else if(flag==0){
    for(int i=1;i<=n;i++) printf("%d",ans[i]);
  }
  return 0;
}