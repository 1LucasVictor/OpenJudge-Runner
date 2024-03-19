#include <stdio.h>

int main(void){
  int n,m,s[10],c[10],i,k;
  scanf("%d %d",&n,&m);
  for(i=0;i<=m-1;i++){
    scanf("%d %d",&s[i],&c[i]);
  }
  for(i=0;i<=m-1;i++){
    for(k=0;k<=m-1;k++){
      if(((s[i]==s[k])&&(c[i]!=c[k]))||((n>=2)&&(s[i]==1)&&(c[i]==0))){
        printf("-1\n");
        return 0;
      }
    }
  }
  for(i=0;i<=m-1;i++){
    if(s[i]==1) c[i]=c[i]*10*10;
    if(s[i]==2) c[i]=c[i]*10;
  }
  for(i=0;i<=m-1;i++){
    for(k=0;k<=m-1;k++){
      if(i==k) continue;
      if((s[i]==s[k])&&(c[i]==c[k])) c[i]=0;
    }

  }
  printf("%d\n",c[0]+c[1]+c[2]);

  return 0;
}