#include <stdio.h>
#include <string.h>
int main(void){
	char a[202],c[101],e[202];
	int i,j,k,m,b,d,len;
	
	while(1){
		scanf("%s",a);
		if(strcmp(a,"-")==0)
			return 0;
		scanf("%d",&d);
		len = strlen(a);
		for(k=0;k<d;k++){
			scanf("%d",&b);
			for(i=0;i<b;i++)
				c[i] = a[i];
			strcat(a,c);
			for(i=0;i<=b;i++)
				c[i] = '\0';
			for(j=0;j<len;j++)
				e[j] = a[j+b];
			for(m=0;m<len;m++)
				a[m] = e[m];
			a[len] = '\0';
		}
		for(i=0;i<len;i++){
			printf("%c",a[i]);
		}
		printf("\n");
	}
}