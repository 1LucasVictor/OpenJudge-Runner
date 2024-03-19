#include <stdio.h>

int main(){
	
	int n[1000],x[10000];
	
	int i=0;
	
	while(1){
		
		if(i!=0)
			
			scanf("%*c");
		
		scanf("%d %d",&n[i],&x[i]);
		
		if(n[i]==0&&x[i]==0)
		
			break;
		
		i++;
		
	}

	int t;

	int a[i],b[i],c[i];
	
	int number[i];

	for(t=0;t<=i-1;t++){

		/*
		printf("%d %d\n",t,i);
		*/
		
		number[t]=0;
		
		for(a[t]=1;a[t]<=n[t];a[t]++){

			/*
			printf("a[%d]=%d\n",t,a[t]);
			*/
			
			for(b[t]=a[t];b[t]<=n[t];b[t]++){
				
				if(a[t]==b[t])
					b[t]++;
			
				if(b[t]>n[t])
					break;
				
				/*
				printf("b[%d]=%d\n",t,b[t]);
				*/
				
				for(c[t]=b[t];c[t]<=n[t];c[t]++){
					
					if(b[t]==c[t]||a[t]==c[t])
					
						c[t]++;
					
					if(c[t]>n[t])
						break;
					
					if(a[t]+b[t]+c[t]==x[t]){
					
						number[t]++;
					
						/*
						printf("%d %d %d match!\n",a[t],b[t],c[t]);
						*/

					}

					/*
					printf("c[%d]=%d\n",t,c[t]);
					*/

				}
				
			}
			
		}
		
	}
	
	int k;
	
	for(k=0;k<=i-1;k++){
		
		printf("%d\n",number[k]);
		
	}
	
	return 0;
	
}