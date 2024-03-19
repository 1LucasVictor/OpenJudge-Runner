#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	char a[1200];
	int i,l;
	fgets(a,1200,stdin);
	l=strlen(a
	);
	for(i=0;i<l;i++){
		if('a'<=a[i]&&a[i]<='z')
			a[i]=toupper(a[i]);
		else
			a[i]=tolower(a[i]);
	}
	printf("%s",a);
	return 0;
}