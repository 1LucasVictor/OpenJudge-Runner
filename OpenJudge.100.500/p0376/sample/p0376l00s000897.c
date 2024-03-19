#include <stdio.h>
#define NUMBER 100
main()
{
	int i, n, x[100];
	scanf("%d\n", &n);
	for (i=0;i<n;i++){
		scanf("%d\n", &x[i]);
		
	}
	for (i=n-1; i>=0; i--){
	 printf("%d", x[i]);
         if (i==0)
		printf("\n");
	 else 
                printf(" ");
}
}

