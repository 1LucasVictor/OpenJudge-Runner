#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main () {
	int a,b,c,d,e,f=0,g;
	char moji[100],mae[100],ato[100];
	char ka,ki,ku;
	while(1){
		scanf("%s",moji);
		e=strlen(moji);
		if(moji[0]=='-'&&e==1)break;
		scanf("%d",&a);
		for(b=0;b<a;b++){
			scanf("%d",&c);
			for(d=0;d<c;d++){
				ato[d]=moji[d];
			}
			ato[c]='\0';
			f=0;
			for(d=c;d<e;d++){
				mae[f]=moji[d];
				f++;
			}
			mae[f]='\0';
			strcat(mae,ato);
			for(g=0;g<e;g++){
				moji[g]=mae[g];
			}
		}printf("%s\n",moji);
	}
			








	//scanf("%d",&a);
	return 0;}