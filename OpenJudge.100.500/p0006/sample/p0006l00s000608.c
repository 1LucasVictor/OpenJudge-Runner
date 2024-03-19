#include<stdio.h>
int main(void){
  int n,i;
  int dept=100000;
  int x;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    dept *= 1.05;
    if(dept%1000!=0){
      dept = ((dept/1000)+1)*1000;
    }
  }
  printf("%d\n",dept);
  return(0);
}