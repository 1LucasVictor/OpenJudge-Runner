#include<stdio.h>
#define N 100
int main(){
  int i,j;
  int a[N][N]={0};
  int n,x,y,z;

  scanf("%d",&n);//頂点数

  for(i=0; i<n; i++){
      scanf("%d %d",&x,&y); //x：1からn番目 y：各頂点に何個隣接するのがあるか
      for(j=0; j<y; j++){ //j<yまで、なぜなら隣接する個数分だけスキャンするから
	scanf("%d",&z); //z:隣接する頂点の分だけスキャンされる
	a[x-1][z-1]=1; //配列だから-1しないといけない n番目に入れたいならn-1とかくように
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(j==n-1){
	printf("%d",a[i][j]);
      }
      else{
      printf("%d ",a[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}

