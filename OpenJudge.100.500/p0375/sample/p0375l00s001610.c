#include <stdio.h>

int main(){

	int n;
	int i,j;	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	
		if(i%3==0){printf(" %d",i); continue;}	//3????????°
		if(i%10==3){printf(" %d",i); continue;} //????????????3
		
		j=i;
		while(1){
			j/=10;
			if(j==0){break;}
			if(j%10==3){printf(" %d",i);}		//3??????????
		}
	
	}

	printf("\n");
	return 0;

}