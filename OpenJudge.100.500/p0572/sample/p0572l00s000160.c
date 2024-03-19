#include<stdio.h>

int main(){
  int L,R,l,r,i,j,min,temp;
  
  //L,Rを読み込み
  scanf("%d %d",&L,&R);
  
  l=L%2019;
  r=R%2019;
  min=2018;
  
  if(R-L>=2018){min=0;}
  
  
  for(i=l; i<r; i++){
  	for(j=i+1; j<=r; j++){
      temp=(i*j)%2019;
      if(min>=temp){min=temp;}
    }  
  }
  
  printf("%d\n",min);
  
  return(0);
}
