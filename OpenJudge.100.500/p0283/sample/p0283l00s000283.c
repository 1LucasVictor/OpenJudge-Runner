#include<stdio.h>
#define N 8
int a[N],b[N],c[16],d[16];
char e[N][N];
int koukan1(int x,int y){
  return 7-x+y;
  }
int koukan2(int x,int y){
  return x+y;
}
int plbslv(int x){
  int y;
  if(x==N)return 1;
  if(a[x])return plbslv(x+1);
  for(y=0;y<N;++y){
    if(b[y])continue;
    if(c[koukan1(x,y)])continue;
    if(d[koukan2(x,y)])continue;
    a[x]=1; b[y]=1;
    c[koukan1(x,y)]=1;
    d[koukan2(x,y)]=1;
    e[x][y]='Q';
    if(plbslv(x+1))return 1;
    a[x]=0;b[y]=0;
    c[koukan1(x,y)]=0;
    d[koukan2(x,y)]=0;
    e[x][y]='.';
  }
  return 0;
}
int main(){
  int total,i,j,haga,seven;
  for(i=0;i<N;++i){
    for(j=0;j<N;++j){
      e[i][j]='.';
    }
  }
  scanf("%d",&total);
  for(i=0;i<total;++i){
    scanf("%d %d",&haga,&seven);
    a[haga]=1;b[seven]=1;
    c[koukan1(haga,seven)]=1;
    d[koukan2(haga,seven)]=1;
    e[haga][seven]='Q';
  }
  plbslv(0);
  for(i=0;i<N;++i){
    for(j=0;j<N;++j){
      printf("%c",e[i][j]);
    }
    printf("\n");
  }
  return 0;
}
