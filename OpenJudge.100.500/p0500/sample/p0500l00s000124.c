#include<stdio.h>

int main(){
  int n,m; //nケタ
  int i,j,flag=0;
  scanf("%d %d",&n,&m);
  int s[m],c[m],ans[n];
  for(i=0;i<m;i++)
    scanf("%d %d",&s[i],&c[i]);
  
  for(i=0;i<m;i++){
    for(j=0;j<m;j++){
      if(s[i]==s[j] && c[i]!=c[j])
	flag++;
    }
    ans[s[i]-1]=c[i];
  }
  if(ans[0]!=0 && flag==0){
    for(i=0;i<n;i++)
      printf("%d",ans[i]);
  }
  else
    printf("-1");
}