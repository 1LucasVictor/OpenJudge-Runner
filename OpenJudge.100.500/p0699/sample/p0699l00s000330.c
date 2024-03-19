#include<stdio.h>
#include<stdlib.h>
int main(){
  int num_5,num_7;
  int i;
  char str[3][10];
  num_5=num_7=0;
  
  scanf("%s",str[0]);
  scanf("%s",str[1]);
  scanf("%s",str[2]);
  
  for(i=0;i<3;i++){
   	if(atoi(str[i])==5){
      	num_5++;
  	}else if(atoi(str[i])==7){
    	num_7++;
    }
  }
  
  if(num_5==2&&num_7==1){
  	printf("YES\n");
  }else{
  	printf("NO\n");
  }
  
  return 0;
}