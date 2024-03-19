#include<stdio.h>

int main(){
  int cou,i,j,k,l,val;

  while((scanf("%d",&val)) != EOF){
    cou=0;
    for(i=0;i<10;i++){
      for(j=0;j<10;j++){
	for(k=0;k<10;k++){
	  for(l=0;l<10;l++){
	    if(i+j+k+l == val)cou++;
	  }
	}
      }
    }
    printf("%d\n",cou);
  }
  return 0;
}