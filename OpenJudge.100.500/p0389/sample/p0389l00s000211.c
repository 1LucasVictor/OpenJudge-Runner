#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,m,h,num;
	char s[301],s1[301],s2[301];
	
	while(1){
		scanf("%s",&s);
		num = strlen(s);
		if(s[0] == '-'){
			break;
		}
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&h);
			strcpy(s1,s);
			strcpy(s2,s);
			strcat(s1,s2);
			for(j=0;j<num*2;j++){
				s1[j] = s1[j+h];
			}
			for(j=0;j<num;j++){
				s[j] = s1[j];
			}
		}
	for(i=0;i<num;i++){
		printf("%c",s[i]);
	}
	printf("\n");
	}
	return 0;
}