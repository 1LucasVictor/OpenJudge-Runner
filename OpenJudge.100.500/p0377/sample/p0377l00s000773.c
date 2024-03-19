#include <stdio.h>
int main()
{
	int n, i, j;
	char s;
	

	int a[4][13] = { 0 };
	
	scanf("%d\n",&n);
	
	while(n--){
		scanf("%c %d\n", &s,&j);
		
		if(s=='S')i=0;
		else if(s=='H')i=1;
		else if(s=='C')i=2;
		else i=3;
		
		a[i][j-1]=1;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(a[i][j]==0){
				if(i==0)s='S';
				else if(i==1)s='H';
				else if(i==2)s='C';
				else s='D';
				printf("%c %d\n",s ,j+1);
			}
		}
	}
	return 0;
}
