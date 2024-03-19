#include<stdio.h>

int main(void){
  int n,m;
  scanf("%d%d",&n,&m);
  int i,j;

  int s[m],c[m];

  for(i=0;i<m;i++){
    scanf("%d%d",&s[i],&c[i]);
  }
  char ans[n];
  for(i=0;i<n;i++){
    ans[i]='0';
  }
  if(m==0){
    ans[0]='1';
    printf("%s",ans);
    return 0;
  }

  for(i=0;i<m;i++){
    for(j=i+i;j<m;j++){
      if(s[i]==s[j]){
        if(c[i]!=c[j]){
          printf("-1");
          return 0;
        }
      }
    }
  }

  for(i=0;i<m;i++){
    if(s[i]==1&&c[i]==0){
      printf("-1");
      return 0;
    }
  }



  for(i=0;i<n;i++){
    ans[s[i]-1]=c[i]+'0';
  }

  printf("%s",ans);



  return 0;
}
