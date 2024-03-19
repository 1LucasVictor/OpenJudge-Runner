#include<stdio.h>

#define MAX 100
#define NIL -1
#define WHITE 0
#define GREY 1
#define BLACK 2
#define INF (1<<21)

int n;
int in[MAX][MAX],color[MAX],p[MAX],d[MAX];

int main(){
  
  int i,j;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    
    for(j=0;j<n;j++) scanf(" %d",&in[i][j]);
  }
  
  printf("%d\n",prim());
  
  return 0;
}

int prim(){
  
  int i,temp,min,sum=0;
  
  for(i=0;i<n;i++){
    color[i]=WHITE;
    p[i]=NIL;
    d[i]=INF;
  }
  
  d[0]=0;
  
  while(1){
    
    min=INF;
    temp=NIL;
    
    for(i=0;i<n;i++){
      
      if(color[i]!=BLACK && d[i]<min){
	
        min=d[i];
        temp=i;
      }
    }
    
    if(temp==NIL) break;
    
    color[temp]=BLACK;
    
    for(i=0;i<n;i++){
      
      if(color[i]!=BLACK && in[temp][i]!=NIL){
	
	if(d[i]>in[temp][i]){
	  d[i]=in[temp][i];
	  p[i]=temp;
	  color[i]=GREY;
	}
      }
    }
  }
  
  for(i=0;i<n;i++){
    if(p[i]!=NIL) sum+=in[i][p[i]];
  }
  return sum;
}

