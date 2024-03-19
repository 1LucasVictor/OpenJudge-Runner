#include <stdio.h>
#include <math.h>
int main(void){
	int N,M;
  scanf("%d %d",&N,&M);
	int s[M];
  int c[M];
  int result=0;
  int flg[3]={0,0,0};
  for(int i=0;i<M;i++){
  	scanf("%d %d",&s[i],&c[i]);
  	if(flg[s[i]-1]==0){
    	result+=c[i]*(int)(pow(10,3-s[i]));
    	flg[s[i]-1]=1;
    }else{
      if((result/((int)pow(10,3-s[i]))-c[i])!=0){
      	printf("-1");
        return 0;
      }
    }
  }
  if(flg[N]==1&&result<pow(10,N-1)){
    printf("-1");
    return 0;
  }
  if(flg[N]==0&&result<pow(10,N-1)){
  	printf("%d",(int)(result+pow(10,N-1)));
    return 0;
  }
     printf("%d",(int)result);
     return 0;
         }