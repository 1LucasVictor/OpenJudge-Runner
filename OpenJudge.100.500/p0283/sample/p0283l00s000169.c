#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int x;
  int y;
} Point;

typedef struct{
  char tate[8];
  char yoko[8];
  char naname[15];
  char sita[15];
} Field;

Point Q[8];

int put(char x, Field F ,char s){
  int i,m;
  if(s==8) return 0;
  if(F.tate[x]==-1) return put(x+1,F,s);
  
  for(i=0;i<8;i++){
    if(F.yoko[i]==-1 || F.naname[x+i]==-1 || F.sita[x-i+7]==-1) continue;

    //printf("s=%d, x=%d, i=%d",s,x,i); for(i=0;i<s;i++) printf(" Q[%d]=(%d,%d)",i,Q[i].x,Q[i].y); printf("\n");
    Q[s].x=x;
    Q[s].y=i;

    //printf("Q[%d]={%d,%d} ,%d:%d:%d\n",s,Q[s].x,Q[s].y,F.yoko[i],F.naname[x+i],F.sita[x-i+7]);
	
    F.yoko[i]--;
    F.naname[x+i]--;
    F.sita[x-i+7]--;
	
    if( put(x+1,F,s+1) == 0 ) return 0;

    F.yoko[i]++;
    F.naname[x+i]++;
    F.sita[x-i+7]++;
    
  }

  return -1;		
}

int main(){
  int i,j,n;
  char board[8][8];
  Field F;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d%d",&Q[i].x,&Q[i].y);
  }

  for(i=0;i<8;i++) F.tate[i]=F.yoko[i]=0;
  for(i=0;i<15;i++) F.naname[i]=F.sita[i]=0;

  for(i=0;i<n;i++){
    F.tate[ Q[i].x ]=-1;
    F.yoko[ Q[i].y ]=-1;
    F.naname[ Q[i].x + Q[i].y ]=-1;
    F.sita[ Q[i].x - Q[i].y + 7]=-1;
  }

  //for(i=0;i<8;i++) printf("tate[%d]=%d,yoko[%d]=%d \n",i,F.tate[i],i,F.yoko[i]);
  //for(i=0;i<15;i++) printf("naname[%d]=%d,sita[%d]=%d\n",i,F.naname[i],i,F.sita[i]);

 put(0,F,n);

  for(i=0;i<8;i++) for(j=0;j<8;j++) board[i][j]='.';
  for(i=0;i<8;i++) board[ Q[i].x ][ Q[i].y ]='Q';

  for(i=0;i<8;i++){
    for(j=0;j<8;j++) printf("%c",board[i][j]);
    printf("\n");
  }
    
  return 0;
}


