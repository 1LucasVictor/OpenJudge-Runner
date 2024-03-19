#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
#define NOT_FOUND 0 

int n,q;
int A[MAX],T[MAX];

int i,j,k;
int count=0;
int linerSearch(){
  for(i=0;i<n;i++){
    if(A[i]==T[j])return 1;
  }
  return NOT_FOUND;
}





    int main(){
      scanf("%d",&n);
      for(i=0;i<n;i++)scanf("%d",&A[i]);

      scanf("%d",&q);

      for(j=0;j<q;j++){
    
	scanf("%d",&T[j]);
	for(k=0;k<j;k++){
	  if(T[j]==T[k]){
	    fprintf(stderr,"エラー\n");
	    exit(8);
	  }
	}
	
	count+=linerSearch();
      }


printf("%d\n",count);

      return 0;
    }






	   

