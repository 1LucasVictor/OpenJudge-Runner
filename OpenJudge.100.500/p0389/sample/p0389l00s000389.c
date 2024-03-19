#include<stdio.h>
#include<string.h>


void shu(char *pt,int *ph,int sy){

	int i,j,num;
	char ch;

	for(i=0;i < sy;i++){
		
		for(num=0;num < ph[i];num++){



	
			for(j=0;pt[j] !=  '\0';j++){

				if(pt[j+1] == '\0'){
					
					break;
				}
				ch = pt[j];
				pt[j] = pt[j+1];
		
	
		
				pt[j+1] = ch;

			}		
			
		}
	}
	
	printf("%s\n",pt);


}


int main(void){


	char T[201];
	int  h[100];

	int sy,i;

	while(1){

		scanf("%s",T);
		if(T[0] == '-' ){
			break;
		}
	
		scanf("%d",&sy);

		for(i=0;i< sy;i++){
		
			scanf(" %d",&h[i]);

		}


		shu(T,h,sy);

	}




return 0;


}