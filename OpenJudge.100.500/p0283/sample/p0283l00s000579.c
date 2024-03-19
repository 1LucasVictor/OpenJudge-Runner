#include <stdio.h>
const unsigned char TRUE = 1;
const unsigned char FALSE = 0;

void insert();
void print();
void saiki(int);

int aaa[8],bbb[8],ccc[2*8-1],ddd[2*8-1];

char R[8][8];
void insert(){
  int i,j;
  for(i=0;i<8;i++){
    aaa[i]=-1;
    bbb[i]=-1;
    
  }
  for(i=0;i<2*8-1;i++){
    ccc[i]=-1;
    ddd[i]=-1;
  }
}
void print(){
  int i,j;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(R[i][j]){
	if(aaa[i]!=j)
	  return;
      }
    }
  }
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(aaa[i]==j)
	printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  //printf("a");
}
void saiki(int s){
  int j;
  if(s==8){
    print();
    return;
  }
  for(j=0;j<8;j++){
    if(1==bbb[j] || 1==ccc[s+j] || 1==ddd[s-j+8-1])
     continue;
    aaa[s]=j;
    bbb[j]=ccc[s+j]=ddd[s-j+8-1]=1;
    //次の行を試す
    saiki(s+1);
    //(i,j)に配置されているクイーンを取り除く
    aaa[s]=bbb[j]=ccc[s+j]=ddd[s-j+8-1]=-1;
  }
}
int main(){
  int i,k,m,j,n;
  insert();//初期か
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      R[i][j]=FALSE;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&k);
    scanf("%d",&m);
    R[k][m]=TRUE;
  }
  saiki(0);
  return 0;
}
  

