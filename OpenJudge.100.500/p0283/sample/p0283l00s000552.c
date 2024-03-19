#include <stdio.h>

int ban[8][8];

void queen(int,int,int*,int*,int*,int*);

int main(){
  int i,j,n,key1,key2,row[8],col[8],dpos[15],dneg[15];

  scanf("%d",&n);

  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      ban[i][j]=0;
    }
    row[i]=col[i]=dpos[2*i]=dpos[2*i+1]=dneg[2*i]=dneg[2*i+1]=0;
  }
  
  for(i=0;i<n;i++){
    scanf("%d%d",&key1,&key2);

    ban[key1][key2]=1;
    row[key1]=1;
    col[key2]=1;
    dpos[key1+key2]=1;
    dneg[key1-key2+7]=1;
  }

  queen(0,8,row,col,dpos,dneg);


  return 0;
}

void queen(int i,int n,int *row,int *col,int *dpos,int *dneg){
  int j;

 
    
  if(i==n){
    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
        if(ban[i][j]) printf("Q");
        else printf(".");
      }
      printf("\n");
    }
  
      return;
    }



  if(row[i]){
    
    queen(i+1,n,row,col,dpos,dneg);
  }
  else{
    for(j=0;j<n;j++){

      if(col[j] || dpos[i+j] || dneg[i-j+7]) continue;

      ban[i][j]=1;
      row[i]=j;
      col[j]=dpos[i+j]=dneg[i-j+7]=1;

      queen(i+1,n,row,col,dpos,dneg);

      col[j]=dpos[i+j]=dneg[i-j+7]=ban[i][j]=0;
    }
    row[i]=0;
  }

}

  
    

