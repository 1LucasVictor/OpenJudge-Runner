#include <stdio.h>
#include <string.h>
int main()
{
	char str[201];
	int l, m, h, i, j, k;
	while(1){
		scanf("%s", str);
		l=strlen(str);
		if(str[0]=='-' && l==1){
			break;
		}
		scanf("%d", &m);
		for(i=0; i<m; i++){
			scanf("%d", &h);
			for(j=0; j<h; j++){
				str[l]=str[l-1];
				str[l-1]=str[0];
				str[0]=str[l];
				str[l]='\0';
				for(k=1; k<l-1; k++){
					str[l]=str[k];
					str[k]=str[k-1];
					str[k-1]=str[l];
					str[l]='\0';
				}
			}
		}
		printf("%s\n", str);
	}
	return 0;
}