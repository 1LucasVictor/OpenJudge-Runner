#include<stdio.h>
 
int a[8],b[8],c[15],d[15];
char t[8][8];

int Hira(int y){
  if(y==8)return 1;
  if(a[y])return Hira(y+1);
  int x;
  for(x=0;x<8;x++){
    if(b[x])continue;
    if(c[7-x+y])continue;
    if(d[y+x])continue;
    a[y]=1;
    b[x]=1;
    c[7-x+y]=1;
    d[y+x]=1;
    t[y][x]='Q';
    if(Hira(y+1))return 1;
    a[y]=0;
    b[x]=0;
    c[7-x+y]=0;
    d[y+x]=0;
    t[y][x]='.';
  }
  return 0;
}
 
int main(){
  int n,x,y,i,j;
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      t[i][j]='.';
 
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&y,&x);
    a[y]=1;
    b[x]=1;
    c[7-x+y]=1;
    d[y+x]=1;
    t[y][x]='Q';
  }
 
  Hira(0);
 
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      printf("%c",t[i][j]);
    }
    printf("\n");
  }
 
  return 0;
}