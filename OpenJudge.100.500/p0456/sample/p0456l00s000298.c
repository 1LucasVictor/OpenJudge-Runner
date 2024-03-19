#include<stdio.h>

int main(){
	int frag = 0,i;
	char a[200000],b[200000];
	scanf("%s",a);
	scanf("%s",b);
	for(i = 0; a[i] != '\0'; i++){
		if(a[i] != b[i]){
			frag++;
		}
	}
	printf("%d",frag);
}
