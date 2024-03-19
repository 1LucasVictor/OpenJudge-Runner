#include<stdio.h>

int main(){
  int x,y,z;
  int i,j;
  int max;

  scanf("%d",&x);
  scanf("%d",&y);

  if(x<y) z=y%x;
  else z=x%y;

  for(i=2;i<=z;i++){
    if((z%i)==0){
      for(j=2;j<=y;j++){
	if((z/i)==(y/j)){
	  max=y/j;
	  break;
	}
      }
    }
    if((z/i)==(y/j))break;
  }
  printf("%d\n",max);
  return 0;
}

