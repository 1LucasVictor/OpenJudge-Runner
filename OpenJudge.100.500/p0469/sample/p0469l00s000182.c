#include<stdio.h>
int main()
{
  int k,a,b;
	scanf("%d %d %d",&k,&a,&b);
  int i;
  int flag=0;
  for(i=a;i<b+1;i++){
    if(i%k==0){
      flag=1;
      break;
    }
  }
  if(flag==0){
    printf("NG");
  }
  else{
    printf("OK");
  }  
	return 0;
}