#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void){
	int x,i,j,k,m;
	char a[201],b[101][201];
	j=0;
	while (1) {
		scanf("%s",a );
		if(a[0]=='-')break;
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&x );
			strcpy(b[j],a+x);
			strncat(b[j],a,x);
			strcpy(a,b[j]);

		}	j++;
	}
	for(i=0;i<j;i++)printf("%s\n",b[i]);

	return 0;
}