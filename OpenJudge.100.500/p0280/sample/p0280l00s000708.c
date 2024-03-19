#include<stdio.h>
#include<stdlib.h>
#define N 100
#define A 999999999
#define B 0
#define C 1
#define D 2

int n,E[N][N]={};

int F(void);
 
int main(){
  int i,j,x;
    
  scanf("%d",&n);
    
  for(i=0;i<n;i++){
      
    for(j=0;j<n;j++){
	  
      scanf("%d",&x);
	    
      if(x==-1)E[i][j]=A;
      
      else E[i][j]=x;
    }
  }
  printf("%d\n",F());
  return 0;
}

int F(void){
  int min,y,i,j,count=0;;
  int G[N],H[N],I[N];
  
  for(i=0;i<n;i++){
    
    G[i]=A;
    
    H[i]=-1;
    
    I[i]=B;
  }
    
  G[0]=0;
  
  while(1){
    
    min=A;
    
    y=-1;
    
    for(i=0;i<n;i++){
      
      if(min>G[i] && I[i]!=D){
	
	y=i;
	
	min=G[i];
      }
    }
    if(y==-1)break;
    
    I[y]=D;
    
    for(j=0;j<n;j++){
      
      if(I[j]!=D && E[y][j]!=A){
	
	if(G[j]>E[y][j]){
	  
	  G[j]=E[y][j];
	  
	  H[j]=y;
	  
	  I[j]=C;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    
    if(H[i]!=-1)count+=E[i][H[i]];
  }
  return count;
}

