#include<stdio.h>
int main(){
	char a[1001];
	int sum=0;
	while(1){
		scanf("%s",a);
		if(a[0]=='0') break;
		int i;
		for(i=0;a[i]!='\0';i++){
			sum+=a[i]-48;
		}
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}

