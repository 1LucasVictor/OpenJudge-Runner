#include <stdio.h>

int main()
{
	int N;
	int a[3];
	int i = 0;
	
	scanf("%d",&N);
	
	while(N-->0){
		scanf("%d %d %d",&a[0],&a[1],&a[2]);
		
		for(i=0;i<2;i++){
			if(a[i] > a[i+1]){
				int tmp = a[i];
				a[i] = a[i+1];
				a[i+1] = tmp;
				i = 0;
			}
			else i++;
		}
		
		if(a[2] * a[2] == a[1] * a[1] + a[0] * a[0])
			printf("YES\n");
		else
			printf("NO\n");
			
	}
	
	return 0;
}