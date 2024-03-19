#include<stdio.h>
int main(void){
	int i,j,q,f,e,co=0;
	char str[1000],re[100],rep[1000],letter,ans[1000][1000];
	
	scanf("%s",&str);
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%s %d %d",&re,&f,&e);
		if(re[2]=='p'){
			scanf("%s",&rep);
			for(j=0;j<e-f+1;j++){
				str[j+f]=rep[j];
			}
		}
		else if(re[2]=='v'){
			for(j=0;j<(e-f+1)/2;j++){
				letter=str[f+j];
				str[f+j]=str[e-j];
				str[e-j]=letter;
			}
		}
		else{
			co++;
			for(j=0;j<e-f+1;j++){
				
				ans[co-1][j]=str[j+f];
			}
		}
	}
	for(i=0;i<co;i++){
		for(j=0;j<1000;j++){
			if(ans[i][j]=='\0')break;
			printf("%c",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
