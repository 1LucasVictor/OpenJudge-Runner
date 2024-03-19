#include<stdio.h>

int main(){
  int x,y,z=0;
  int i,j;
  int max=0;
  int t=0;

  scanf("%d",&x);
  scanf("%d",&y);

  if(x<y) z=y%x;
  else z=x%y;

  for(i=y;i>0;i--){
    if((y%i)==0){
      for(j=z;j>0;j--){
	if(i==j&&(z%j)==0){
	  max=i;
	  t=1;
	  break;
	}
      }
    }
    if(t==1)break;
  }
  printf("%d\n",max);
  return 0;
}

