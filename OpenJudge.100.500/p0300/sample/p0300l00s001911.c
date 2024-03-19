#include <stdio.h>
#include <string.h>
//int linearSearch(int *,int);

/*int linearSearch(int *A,int key){
  int count=0,i;
  int length;
  length=sizeof(A)/sizeof(int);
  
  for(i=0;i<length;i++){
    if(A[i]!=key) count++;
  }
  return count!=length;
}
*/
int main(){
  int n,q;
  int i,j;
  int S[1000],T[1000];
  int awcount=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&T[i]);
  }
  for(i=0;i<q;i++){
    for(j=0;j<n;j++){
      if(S[j]==T[i]){
	awcount++;
	break;
      }
    }
  }
  printf("%d\n",awcount);

  return 0;
}

  

