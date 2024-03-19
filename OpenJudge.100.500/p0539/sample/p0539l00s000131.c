#include<stdio.h>

int main(void){

  int a,i=0,j=0;
  int flag=0;
  scanf("%d",&a);
  if(a<0||a>100){
	printf("No");
  }else{
	for(i=0;i<9;i++){
	    for(j=0;j<9;j++){
        if((i+1)*(j+1)==a){
          flag = 1;
        	}
        }
    }
  }
  if(flag==1){
    printf("Yes");
  }else{
    printf("No");
  }
           
  return 0;
}