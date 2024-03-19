#include <stdio.h>
int count(int n){
  int i,j,k,l;
  int count=0;
  for(i=0;i<10;i++){
	for(j=0;j<10;j++){
	  for(k=0;k<10;k++){
		for(l=0;l<10;l++){
		  if(n==i+j+k+l){
			count++;
		  }
		}
	  }
	}
  }
  return count;

}

int main(){
  int num;
  char tmp[8];
  while(fgets(tmp, 8, stdin)!=NULL){
	num = atoi(tmp);
	printf("%d\n", count(num));
  }
  return 0;
}