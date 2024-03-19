#include<stdio.h>
int main()
{
    int N;
  	scanf("%d",&N);
  	int i=0;
    int a[N];
  	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
    }
  	int test = 0;
  	int check = 0;
  	for(i=0;i<N;i++){
		if((a[i] %2) ==0){
          test++;
			 if((a[i]%3) ==0){
               check++;
             }else if((a[i]%5) == 0){
				check++;
             }
        }
    }
  
  if(test == check){
	printf("APPROVED");
  }else{
	printf("DENIED");
  }
 
  
    return 0;
}
