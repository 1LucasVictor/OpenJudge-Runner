#include<stdio.h>
#include<string.h>

int main(){
	char str[1001];
	char order[32];
	char p[1001];
	int a,b;
	int q,loop;
	int i,j;
	
	scanf("%s",str);
	scanf("%d",&q);
	for(loop=1;loop<=q;loop++){
		scanf("%s %d %d",order,&a,&b);
		if(strcmp(order,"print")==0){
			for(i=a;i<=b;i++){
				printf("%c",str[i]);
			}
			printf("\n");
		}
		else if(strcmp(order,"reverse")==0){
			j=0;
			for(i=a;i<=b;i++){
				p[j]=str[b-j];
				j++;
			}
			j=0;
			for(i=a;i<=b;i++){
				str[i]=p[j];
				j++;
			}
		}
		else{
			scanf("%s",p);
			j=0;
			for(i=a;i<=b;i++){
				str[i]=p[j];
				j++;
			}
		}
	}
	
	return 0;
}