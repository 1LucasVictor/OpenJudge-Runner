#include<stdio.h>

int main(){
  int L,R,i,j,min,temp;
  
  scanf("%d %d",&L,&R);
  
  for(i=L; i<=R; i++){
  	if(i%2019==0){min=0;}
  }
  
  L=L%2019;
  R=R%2019;
  min=2018;
  

  for(i=L; i<R; i++){
  	for(j=i+1; j<=R; j++){
      temp=(i*j)%2019;
      if(min>=temp){min=temp;}
    }  
  }
  
  printf("%d\n",min);
  
  return(0);
}
