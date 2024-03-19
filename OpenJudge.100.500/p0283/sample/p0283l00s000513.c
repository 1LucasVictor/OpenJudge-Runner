#include<stdio.h>
#include<string.h>
int set(int[][8],int,int,int);
int check(int[][8],int*,int);
int main(){
  int n,i,j,q[8],tate,yoko;
  
int kinsi[8][8];
  for(i=0;i<8;i++)
    for(j=0;j<8;j++){
      kinsi[j][i]=0;
      q[i]=-1;
    }
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&tate,&yoko);
    set(kinsi,tate,yoko,1);
    q[tate]=yoko;
  }
  check(kinsi,q,0);


  
  
}
int check(int kinsi[][8],int *q,int now){
  int i,j;
  
  if(now==8) {
    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
	if(q[i] == j)
	  printf("Q");
	else
	  printf(".");
      }
      printf("\n");
    }
    return 1;
  }
  if(q[now]!=-1){
    check(kinsi,q,now+1);
  }
  for(i=0;i<8;i++){
    if(kinsi[now][i]==0){
      set(kinsi,now,i,1);
      q[now]=i;
      check(kinsi,q,now+1);
      q[now]=-1;
      set(kinsi,now,i,-1);
      
      
    }

  }

  
  return 0;

}
int set(int bord[][8],int tate,int yoko,int dotti){
  int i,j,k,seihu[5]={1,1,-1,-1,1};
  for(i=0;i<8;i++)
    bord[tate][i]+=dotti;
  for(i=0;i<8;i++)
    bord[i][yoko]+=dotti;
  for(k=0;k<4;k++){
    i=tate;
    j=yoko;
    while(i>=0 &&i<8 && j>=0&&j<8){
      bord[i][j]+=dotti;
      i+=seihu[k];
      j+=seihu[k+1];
    }
  }
  return 1;

}

