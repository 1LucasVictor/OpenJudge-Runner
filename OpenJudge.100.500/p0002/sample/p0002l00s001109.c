#include <stdio.h> 
int main()
{
 	int a,b,c,i=0,n,k[1000];
	scanf("%d",&n);

	while(i<n){
		scanf("%d %d %d",&a,&b,&c);
		if(a*a+b*b==c*c)
			k[i]=1;
		else
			k[i]=0;
	i++;
	}
	printf("\n");
	for(i=0;i<n;i++){
		if(k[i]==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
