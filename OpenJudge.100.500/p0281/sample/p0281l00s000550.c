#include<stdio.h>
 
#define MAX  500
static const int INFTY = (1<<21);

int H[MAX],n,bbb=1;
int NOT(int k){
  int i;
  for(i=0;i<bbb;i++){
    if(H[i]==k)return 0;
  }
  return 1;
}
 
main(){
  int i, j, e, sum,min,k,c,v,u,t;
  int V[MAX][MAX];
  int M[MAX];
  int aaa=0;
  H[0]=0;
  int flag=0,before=0;
  int data[MAX];
  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      V[i][j] = INFTY;
    }
  }

  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v, &c);
      V[u][v] = c;
    }
  }


  i=0;
  while(i<n-1){
    min=INFTY;
    for(j=0;j<bbb;j++){
      for(k=0;k<n;k++){
	if(NOT(k) && V[H[j]][k]<min){
	  min=V[H[j]][k];
	  flag=k;
	}
      }
    }
    M[i]=min;
    H[bbb]=flag;
    
    //printf("%d,%d,%d,mae %d,b %d\n",i,flag,min,aaa,before);
    if(before==0){
      data[flag]=min;
      //printf("%d,%d\n\n",flag,min);
    }else if(V[0][flag] == min){
      data[flag]=min;
      //printf("%d,%d\n\n",flag,min);
    }else{
      data[flag]=min+before;
      //printf("%d,%d\n\n",flag,min+before);
    }
    //puts("");
    //puts("");   
    before+=min;
    sum=0;
    bbb++;
    aaa=flag;
    i++;
  }
 
  sum = 0;
   
  for ( i = 0; i < n; i++ ){
    printf("%d %d\n",i,data[i]);
  }
   
  //printf("%d\n",sum);
   
  return 0;
}