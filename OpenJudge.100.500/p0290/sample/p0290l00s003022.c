#include<stdio.h>
int main(){

  int i,j,n;
  int flag=0,count=0;
  int data[10000];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&data[i]);
  }
  for(i=0;i<n;i++){
    flag=0;
    for(j=2;j<data[i];j++){
      if(data[i]%j==0){
	flag=1;
	break;
      }
    }
    if(flag==0) count++;
  }
  printf("%d\n",count);
  return 0;
}

