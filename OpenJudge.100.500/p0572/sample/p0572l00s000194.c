#include<stdio.h>
#include<stdlib.h>
#define df 0


int main(){
  int l,r;
  scanf("%d%d",&l,&r);
  
  if(r-l>=673){
    printf("%d",0);
    return 0;
  }
  long int i,j,mini,minj;
  long int min=2019,s;
  for(i=l;i<r;i++){
    for(j=i+1;j<=r;j++){
      s=(i*j)%2019;
      if(s<min){
	min=s;
	mini=i;minj=j;
      }
    }
  }
  printf("%ld\n",min);
  if(df)printf("%ld %ld",mini,minj);
}


/// confirm df==0 ///
