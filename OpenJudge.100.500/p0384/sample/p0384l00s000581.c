#include<stdio.h>
int main(){
	char a[10000],x;
	int b,c,d,e,f;
	b=1;
	while(1){
		scanf("%c",&a[b]);
		if(a[b]=='\n') break;
	b++;
	}
	for(c=1;c<=b;c++){
		if('a'<=a[c]&&a[c]<='z'){
			x=a[c]-32;
			printf("%c",x);
			}
		else if('A'<=a[c]&&a[c]<='Z'){
			x=a[c]+32;
			printf("%c",x);
			}
		else printf("%c",a[c]);
		}
	return 0;
}
