#include <stdio.h>
#define MAX 103
int main(){
  int ho,cin,i,j,ku,ver,ru,chi,ko,ri;
  int abc[MAX][MAX]={};
  scanf("%d",&ko);
  for(i=1;i<=ko;i++){
    scanf("%d%d",&chi,&ru);
    for(j=1;j<=ru;j++){
      scanf("%d",&ri);
      abc[chi][ri]=1;
    }
  }
  for(ho=1;ho<=ko;ho++){
    for(ver=1;ver<=ko;ver++){
      printf("%d",abc[ho][ver]);
      if(ver!=ko){
	printf(" ");
      }	
    }
    printf("\n");
  }
  return 0;
}

  
      

