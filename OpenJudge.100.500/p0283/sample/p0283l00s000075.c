#include<stdio.h>
#include<string.h>

char s[10][10];
int a[20],b[20],c[20],d[20];

void dfs(int x){
  
  int i;
  
  if(c[x] == 1)
    dfs(x + 1);
  if(x == 8){
      for(i = 0;i < 8;i++) printf("%s\n",s[i]);
      return;
    }
  
  for(i = 0;i < 8;i++){
    if(a[i] == 0 && b[x+i] == 0 && d[x-i+8] == 0) {
	  a[i] = 1;
	  b[x+i] = 1;
	  d[x-i+8] = 1;
	  s[x][i] = 'Q';
	  dfs(x+1);
	  a[i] = 0;
	  b[x+i] = 0;
	  d[x-i+8] = 0;
	  s[x][i] = '.';
      }
  }
}

int main(){

  int i,j,k,r,q;
  
  scanf("%d",&k);
  
  for(i = 0;i < 8;i++)
    for(j = 0;j < 8;j++)
      s[i][j]='.';
  
  for(i = 0;i < k;i++) {
      scanf("%d%d",&r,&q);
      s[r][q] = 'Q';
      a[q] = 1;
      b[r+q] = 1;
      d[r-q+8] = 1;
      c[r]=1;
  }
  dfs(0);
  
  return 0;
  
}

