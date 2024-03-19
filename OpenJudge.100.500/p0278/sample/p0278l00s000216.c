#include<stdio.h>
#define M 150
int u[M][M],s[M],t,l=1,dps,flag[M];
int tim=-1,where[M];
int visit[M];


int end(int n){
  int a=1,i;

  for(i=1;i<=n;i++){
    if(visit[i]==0){
      visit[i]=1;
      return i;
    }
  }

  return 0;
} 



void push(int a){
  s[t++]=a;
  visit[a]=1;
}
int pop(){
  return s[t--];
}



int main(){
  int a,b,c,d,i,j,k,n,ans[M];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    ans[i+1]=-1;
    for(j=0;j<b;j++){
      scanf("%d",&c);
      u[a][c]=1;
    }
  }


 



  i=1;
  j=1;
  push(i);


  while(t>0){

    if(u[s[t-1]][j]==1&&visit[j]==0){
      push(j);
      where[s[t-2]]=j;
      if(flag[j]==0)flag[j]==1;
      j=1;
    }


    j++;


    if(j>n){
 
      pop();
      j=where[s[t-1]];
      while(l>0){
	l=end(n);
      } 
     
    }
  
  
  }
  flag[1]=1;
  ans[1]=0;
  for(i=1;i<=n;i++){

    for(j=1;j<=n;j++){

      if(u[i][j]==1&&flag[i]==1){
	flag[j]=1;
	if(ans[j]<0||ans[j]>ans[i]+1||i==1)ans[j]=ans[i]+1;


      }



    }
  }

  for(i=1;i<=n;i++){
    printf("%d %d\n",i,ans[i]);

  }


  return 0;
}