#include<stdio.h>
#include<string.h>
int moguru(int[][100],int);
int n,ans[100];
int main(){
  int i,j,a[100][100],mita[100],now,to,leng;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    ans[i]=-1;
  }
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    a[i][j] = -1;
  
  for(i=0;i<n;i++){
    scanf("%d",&now);
    scanf("%d",&now);
    for(j=0;j<now;j++){
      scanf("%d %d",&to,&leng);
      a[i][to] = leng;
    }
  }
  ans[0]=0;
  moguru(a,0);
  for(i=0;i<n;i++){
    printf("%d %d\n",i,ans[i]);
  }

}

int moguru(int a[][100],int now){
  int i;
  for(i=0;i<n;i++){
    if(a[now][i] == -1)
      continue;
    if(ans[now]+a[now][i] < ans[i] || ans[i] == -1){
      ans[i]= ans[now]+a[now][i];
      moguru(a,i);
    }
	
  }
  return 1;

}

