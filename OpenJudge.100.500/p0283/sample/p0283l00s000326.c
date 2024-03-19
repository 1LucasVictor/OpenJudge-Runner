#include<stdio.h>
int ans[8][8]={0};
void printboard(){
  int i,j;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(ans[i][j]==1) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  return;
}
int check(int a,int b){
  int i,j;
  for(i=0;i<8;i++){
    if(i!=b && ans[a][i]==1) return 0;
  }
  for(i=0;i<8;i++){
    if(i!=a && ans[i][b]==1) return 0;
  }
  i=a;
  j=b;
  for(i++,j++;i<8 && j<8;i++,j++){
    if(ans[i][j]==1)return 0;
  }
  i=a;
  j=b;
  for(i--,j--;i>=0 && j>=0;i--,j--){
    if(ans[i][j]==1)return 0;
  }
  i=a;
  j=b;
  for(i++,j--;i<8 && j>=0;i++,j--){
    if(ans[i][j]==1)return 0;
  }
  i=a;
  j=b;
  for(i--,j++;i>=0 && j<8;i--,j++){
    if(ans[i][j]==1)return 0;
  }
  return 1;
}
int putqueen(int m){
  int i;

  for(i=0;i<8;i++){
    if(ans[m][i]==1){
      if(putqueen(m+1)==0)return 0;
    }
  }


  if(m==8){
    printboard();
    return 1;
  }

  else {
    for(i=0;i<8;i++){
      if(ans[m][i]==0 && check(m,i)==1){
        ans[m][i]=1;
        if(putqueen(m+1)==0){
          ans[m][i]=0;
        }
      }
    }
  }


  return 0;

}

int main(){
  int i,j,t,y,n,m=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&t,&y);
    ans[t][y]=1;
  }
  i=putqueen(m);
  return 0;
}


