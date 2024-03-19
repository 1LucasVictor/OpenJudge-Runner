#include<stdio.h>
int main(){
  int i,j,k,t;
  int max,max2=-100000;
  int n[200000];
  scanf("%d",&t);
  for(i=0;i<t;i++){
    scanf("%d",&n[i]);
  }
  for(i=0;i<t;i++){
    for(j=1;j<t;j++){
      if(i<j){
	max=n[j]-n[i];
      }
      if(max>max2){
	max2=max;
      }
    }
  }
  printf("%d\n",max2);
}

