#include <stdio.h>

int b[8][8],at[8],ay[8],b2[8][8];

int aaa(int t){
  int i,j,x,tt,bt[8][8];
  if(at[t]==1){
    if(t==7){
      //printf("r\n");
      return 1;
    }
    //printf("rr\n");
    return aaa(t+1);
  }
  
  for(i=0;i<8;i++){
    //printf("%d %d  %d\n",t,i,b2[t][i]);
    if(ay[i]==0 && b2[t][i]==0){
      at[t]=1;
      ay[i]=1;
      for(j=0;j<8;j++){
	if(-1<t-j && -1<i-j){
	  bt[t-j][i-j] = b2[t-j][i-j];
	  b2[t-j][i-j]=-1;
	}
	if(-1<t-j && i+j<8){
	  bt[t-j][i+j] = b2[t-j][i+j];
	  b2[t-j][i+j]=-1;
	}
	if(t+j<8 && -1<i-j){
	  bt[t+j][i-j] = b2[t+j][i-j];
	  b2[t+j][i-j]=-1;
	}
	if(t+j<8 && i+j<8){
	  bt[t+j][i+j] = b2[t+j][i+j];
	  b2[t+j][i+j]=-1;
	}
      }
      b2[t][i]=1;
      if(t==7)return 1;
      
      x=aaa(t+1);

      
      if(x==1){
	return 1;
      }
      else{
	at[t]=0;
	ay[i]=0;
	for(j=0;j<8;j++){
	  if(-1<t-j && -1<i-j){
	    b2[t-j][i-j]=bt[t-j][i-j];
	  }
	  if(-1<t-j && i+j<8){
	    b2[t-j][i+j]=bt[t-j][i+j];
	  }
	  if(t+j<8 && -1<i-j){
	    b2[t+j][i-j]=bt[t+j][i-j];
	  }
	  if(t+j<8 && i+j<8){
	    b2[t+j][i+j]=bt[t+j][i+j];
	  }
	}
	b2[t][i]=0;
      }
    }
  }
  return 0;
}
      

int main(){
  int i,j,k,n,t,y,count;

  scanf("%d",&n);

  for(i=0;i<8;i++){
    at[i]=0;
    ay[i]=0;
    for(j=0;j<8;j++){
      b[i][j]=0;
      b2[i][j]=0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&t,&y);
    b[t][y]=1;
    for(j=0;j<8;j++){
      if(-1<t-j && -1<y-j){
	b[t-j][y-j]=-1;
	b2[t-j][y-j]=-1;
      }
      if(-1<t-j && y+j<8){
	b[t-j][y+j]=-1;
	b2[t-j][y+j]=-1;
      }
      if(t+j<8 && -1<y-j){
	b[t+j][y-j]=-1;
	b2[t+j][y-j]=-1;
      }
      if(t+j<8 && y+j<8){
	b[t+j][y+j]=-1;
	b2[t+j][y+j]=-1;
      }
    }
    b[t][y]=1;
    b2[t][y]=1;
    at[t]=1;
    ay[y]=1;
  }

  /*for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(b[i][j]==1){
	printf("Q");
      }
      else{
	printf(".");
      }
    }
    printf("\n");
  }

  t=0;*/
  aaa(0);
  //while(1){
  //if(aaa(t)==1)//break;
      //t++;
    //}

  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(b2[i][j]==1){
	printf("Q");
      }
      else{
	printf(".");
      }
    }
    printf("\n");
  }

  return 0;
}
    

