#include<stdio.h>
int main(void){
  int a,b,i,j;
  while(1){
    scanf("%d %d",&a,&b);
    if(a==0&&b==0)return(0);
    for(i=0;i<a;i++){
      for(j=0;j<b;j++){
	if(i==0||i==a-1){
	  printf("#");
	}
	else{
	  if(j==0||j==b-1){
	    printf("#");
	  }
	  else{
	    printf(".");
	  }
	}
      }
      printf("\n");  
    }
    printf("\n");
  }
  return(0);
}