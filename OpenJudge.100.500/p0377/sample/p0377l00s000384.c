#include<stdio.h>
int main(){
  int n,i,j,b;
  int a[4][14];
  char s;
  for(i=0;i<=13;i++){
    a[0][i]=0;
    a[1][i]=0;
    a[2][i]=0;
    a[3][i]=0;
  }
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c %d",&s,&b);
    if(s=='S'){
      a[0][b]=1;
    }else if(s=='H'){
      a[1][b]=1;
    }else if(s=='C'){
      a[2][b]=1;
    }else if(s=='D'){
      a[3][b]=1;
    }
  }
  for(i=0;i<4;i++){
    for(j=1;j<=13;j++){
      if(a[i][j]!=1){
	if(i==0){
	  s='S';
	}else if(i==1){
	  s='H';
	}else if(i==2){
	  s='C';
	}else if(i==3){
	  s='D';
	}
	printf("%c %d\n",s,j);
      }
    }
  }
  return (0);
}