#include<stdio.h>

int main(){
  int L,R,i,j,min,temp;
  
  scanf("%d %d",&L,&R);
  
  L=L%2019;
  R=R%2019;
  min=(L*R)%2019;
  
  for(i=L; i<R; i++){
  	for(j=i+1; j<=R; j++){
      temp=(i*j)%2019;
      if(min>temp){min=temp;}
    }  
  }
  
  printf("%d\n",min);
  
  return(0);
}
