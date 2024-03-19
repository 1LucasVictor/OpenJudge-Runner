#include<stdio.h>

int main(void){
 	int H,N;

	scanf("%d %d\n",&H,&N);

  int a[100000];

  int sum=0;

  for(int i=0;i<N;i++){
    scanf("%s ",&a[i]);
    sum=sum+a[i];
  }


  if(sum>H){printf("Yes");}else{printf("No");}

  	return 0;
}
