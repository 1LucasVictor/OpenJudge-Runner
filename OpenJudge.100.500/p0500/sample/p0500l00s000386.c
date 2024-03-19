#include <stdio.h>

int main(){
  int i,n,m,s[3]={-1,-1,-1},f=0,a,b;
  scanf("%d",&n);
  scanf("%d",&m);
  for(i=0;i<m;i++){
 	scanf("%d %d",&a,&b);
    if((s[3-a]==-1)|(s[3-a]==b)){
      s[3-a]=b;
    }else{
      f=-1;
      break;
    }
  }
  if(f!=-1){
    if(n<3){
      if(s[2]>0){
        f==-1;
      }
      s[2]=0;
    }
    if(n==1){
      if(s[1]>0){
        f=-1;
      }
      s[1]=0;
    }
    if(s[2]==0){
      if(n==3){
      	f=-1;
      }else{
    	if(n==2){
          if(s[1]==0){
          	f=-1;
          }else if(s[1]==-1){
            f=1;
          }
        }
      }
    }else if(s[2]==-1){
      if(n==3){
        s[2]=1;
      }
    }
  }
  for(i=0;i<3;i++){
	if(s[i]==-1){
      s[i]=0;
    }
  }
  if(f!=-1){
    f=s[2]*100+s[1]*10+s[0];
  }
  printf("%d",f);
  return(0);
}
