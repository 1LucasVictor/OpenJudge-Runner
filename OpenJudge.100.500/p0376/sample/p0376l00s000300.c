#include<stdio.h>
#include<string.h>

int main()
{
	int a[100],n,i,keep;

	while(1){	
		scanf("%d",&n);
		if (n<=100 && n>0)
			break;
		else
   			printf("error\n");
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	
	// Input datas is sortting of reverse orderder;	
	for(i=0;i<n/2;i++){
		keep=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=keep;
	}
	for(i=0;i<n;i++){
		if(i) printf(" ");		
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
		