#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void){
	int x,y,z,i,j,k,m;
	char a[1001],b[1001],c[1001];
	char rep[]="replace";
	char rev[]="reverse";
	char pri[]="print";
	scanf("%s",a );
	scanf("%d",&m );
	for(i=0;i<m;i++){
		scanf("%s %d %d",b,&x,&y );
		z=y+1;
		if(strstr(b,rep)!=NULL){
			scanf("%s",c);
			strncpy(a+x,c,y+1-x);
		}
		else if(strstr(b,rev)!=NULL){
			for(j=0;y>=x;y--,j++){
				c[j]=a[y];
				if(y==x)c[j+1]='\0';
			}strncpy(a+x,c,z-x);
		}
		else if(strstr(b,pri)!=NULL){
			strncpy(c,a+x,z-x);
			c[z-x]='\0';
			printf("%s\n",c );
		}
	}

	return 0;
}