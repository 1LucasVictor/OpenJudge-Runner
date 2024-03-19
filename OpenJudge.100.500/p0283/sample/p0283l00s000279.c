#include<stdio.h>

#define N 8
#define exsit -1
#define nexsit 1
#define true 1
#define false 0

int row[N],col[N],lslan[2*N-1],rslan[2*N-1],a[N][N];

//初期化
void initialize(){
  int i;

  for(i=0;i<N;i++){
    row[i]=col[i]=exsit;
  }

  for(i=0;i<2*N-1;i++){
    lslan[i]=rslan[i]=exsit;
  }
}

void print(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(a[i][j] && row[i]!=j) return;   //指定されたところにクイーンがない場合、やり直し
    }
  }

  for(i=0;i<N;i++){             //指定されたところにクイーンがある場合、表示
    for(j=0;j<N;j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void position(int i){
  int j;

  if(i==N){
    print();
    return;
  }

 //クイーンが他のクイーンい襲撃されている場合は無視する
  for(j=0;j<N;j++){
    if(col[j]==nexsit || lslan[i+j]==nexsit || rslan[i-j+N-1]==nexsit ) continue;


    //クイーンを配置する
    row[i]=j;
    col[j]=lslan[i+j]=rslan[i-j+N-1]=nexsit;

    //次の行に配置する
    position(i+1);

    //失敗した場合クイーンを取り除く
    row[i]=col[j]=lslan[i+j]=rslan[i-j+N-1]=exsit;
  }
}

int main(){
  int i,j,n,r,c;

  initialize();

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      a[i][j]=false;
    }
  }
   scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    a[r][c]=true;
  }

  position(0);

  return 0;
}


