#include<stdio.h>
int main()
{

  int n;

  while(scanf("%d",&n)!=EOF){

      if(n%4==0){
	printf("1\n");
	
      }else{
	printf("4\n");
      }

    }

    return 0;
}