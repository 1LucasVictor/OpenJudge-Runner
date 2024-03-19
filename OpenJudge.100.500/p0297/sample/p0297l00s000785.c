#include<stdio.h>
#include<string.h>
#include<stdlib.h>





int main(){
  int s,t;//queの最初と最後を示す.ｔはenqueの時に格納する場所を示す
  int *que;//ラウンドロビン。各プロセスは、読み込んだ時に数字をつけて管理する。
  char **name;//各プロセスに割り振られた数字と、各プロセスの名前を対応させる
  int *time;//各プロセスの残り時間を管理する
  int sumtime=0;
  int n,q;
  int i;
  int quesize;


  //領域確保  
  scanf("%d%d",&n,&q);
  que=malloc(n*sizeof(int));
  time=malloc(n*sizeof(int));
  name=malloc(n*sizeof(char *));
  for(i=0;i<n;i++) name[i]=malloc(100*sizeof(char));


  //読み込みとqueの準備
  for(i=0;i<n;i++){
    que[i]=i;
    scanf("%s%*[^1-9]%d",name[i],&time[i]);
  }
  s=0;
  t=0;
  quesize=n;
  
  
  while(1){
    if(time[que[s]]<=q){
      sumtime+=time[que[s]];
      printf("%s %d\n",name[que[s]],sumtime);
      s=(s+1)%n;
      quesize-=1;
      if(quesize==0) break;
    }
    else{
      sumtime+=q;
      time[que[s]]-=q;
      que[t]=que[s];
      s=(s+1)%n;
      t=(t+1)%n;
    }
  }
  return 0;
}
        


  
