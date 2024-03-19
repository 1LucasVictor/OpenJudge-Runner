#include<stdio.h>
 
int a[8],b[8],c[15],d[15];
char t[8][8];
 
int change(int y,int x){
  return 7-x+y;
}
 
int change2(int y,int x){
  return y+x;
}
 
int solve(int y){
  if(y==8)return 1;
  if(a[y])return solve(y+1);
  int x;
  for(x=0;x<8;x++){
    if(b[x])continue;
    if(c[change(y,x)])continue;
    if(d[change2(y,x)])continue;
    a[y]=1;
    b[x]=1;
    c[change(y,x)]=1;
    d[change2(y,x)]=1;
    t[y][x]='Q';
    if(solve(y+1))return 1;
    a[y]=0;
    b[x]=0;
    c[change(y,x)]=0;
    d[change2(y,x)]=0;
    t[y][x]='.';
  }
  return 0;
}
 
int main(){
  int i,j;
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      t[i][j]='.';
 
  int N,y,x;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d %d",&y,&x);
    a[y]=1;
    b[x]=1;
    c[change(y,x)]=1;
    d[change2(y,x)]=1;
    t[y][x]='Q';
  }
 
  solve(0);
 
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      printf("%c",t[i][j]);
    }
    printf("\n");
  }
 
  return 0;
}