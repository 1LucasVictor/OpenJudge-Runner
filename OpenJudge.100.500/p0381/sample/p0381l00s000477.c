#include<stdio.h>
int main(){
  while(1){
    int s,e,count=0;
  scanf("%d%d",&s,&e);
  if(s==0&&e==0)break;

  for(int i=1;i<=s;i++){
    for(int j=i;j<=s;j++){
      for(int k=j;k<=s;k++){
	if(i+j+k==e){
	  if(i==j||j==k||k==i)continue;
	  
	  count++;
	  
	  //printf("%d %d %d\n",i,j,k);
	}
      }
    }
  }//ireowari

  printf("%d\n",count);
  
  }
  return 0;
}
