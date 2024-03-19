#include<stdio.h>
#include<string.h>

int main(void){
	char s[1010],m[100],c[1010],p[1010];
	int q,i,j,a,b;
	scanf("%s %d",s,&q);
	strcpy(c,s);
	for(i=0;i<q;i++){
		scanf("%s",m);
		if(strcmp(m,"print")==0){
			scanf("%d %d",&a,&b);
			for(j=a;j<=b;j++){
				printf("%c",s[j]);
			}
			strcpy(c,s);
			printf("\n");
		}
		if(strcmp(m,"reverse")==0){
			scanf("%d %d",&a,&b);
			for(j=a;j<=b;j++){
				s[j]=c[b-j-a];
			}
			strcpy(c,s);
		}
		if(strcmp(m,"replace")==0){
			scanf("%d %d %s",&a,&b,p);
			for(j=a;j<=b;j++){
				s[j]=p[j-a];
			}
			strcpy(c,s);
		}
	}
	return 0;
}