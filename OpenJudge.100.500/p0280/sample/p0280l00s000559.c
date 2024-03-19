#include<stdio.h>
#include<string.h>

#define N 100

int main(){

  int i, j, n,k[N], l[N], w[N][N],min,sum=0,o;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&w[i][j]);
    }
  }
  for(i=0;i<n;i++){
    min = 100;
    for(j=0;j<n;j++){
    
      if(i==0){  if(min>w[i][j]&&w[i][j]!=-1){
	  min = w[i][j];
	  k[i]=i;
	  l[i]=j;
	} }
	else {
  
	  for(o=0;o<i;o++){

	    if(min>w[k[o]][l[o]]&&w[k[o]][l[o]]!=-1){
  
	      min = w[k[o]][l[o]];
	      k[i]=k[o];
	      l[i]=l[o];
 
	    }
	  }
	}
    }
    sum += min;
    w[l[i]][k[i]]=-1;
    w[k[i]][k[i]]=-1;
  }

  printf("%d\n",sum);
  
  return 0;
}