//print a Rectangle

#include<stdio.h>

int main()
{
	int i,j,k,a[100][2],count;

	i=0;	

	while(1){			//a[i][0]:hight a[i][1]:wide

		start:
		scanf("%d %d",&a[i][0],&a[i][1]);
		if ( a[i][0]>300 || a[i][1]>300)
			goto start;


		if(a[i][0]==0 && a[i][1]==0)
			break;

		i++;
	
	}
	
	count=i;
		
	for(i=0;i<count;i++){
		for(j=0;j<a[i][1];j++) printf("#");
		printf("\n");

		for(j=1;j<a[i][0]-1;j++){
			printf("#");
			for(k=1;k<a[i][1]-1;k++)
				printf(".");				
			printf("#");
			printf("\n");
		}
		for(j=0;j<a[i][1];j++) printf("#");
		printf("\n\n");
	}

	return 0;
}
	