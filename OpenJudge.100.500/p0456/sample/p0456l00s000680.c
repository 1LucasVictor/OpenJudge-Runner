#include <stdio.h>
#include <string.h>

int main(void) {
	char s[200010];
	char t[200010];
	int i=0;
	int imax = 0;
	int count = 0;
	
	scanf("%s",s);
	scanf("%s",t);
	//printf("%s\n",s);
	
	//printf("%d\n",strlen(s));
	

	for(i=0;i<strlen(s);i++){
		if(s[i] != t[i]){
			//printf("%d %c",i,s[i]);
			count = count + 1;
		}
	}
	
	printf("%d",count);
	
	
	/*
	for(i=0;i<200005;i++){
		printf("%c",s[i]);
		if(t[i]="\n"){
			break;
		}
	}
	*/
	
	//scanf("%d",&a);
	//printf("%d",a+(a*a)+(a*a*a));
	return 0;
}
