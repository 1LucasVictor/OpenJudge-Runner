#include<stdio.h>
#include<string.h>
int main(){
	char str[2][205];
	int n;
	int x;
	scanf("%s",str[0]);
	while(str[0][0] != '-'){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			strcpy(str[(i+1)%2],&str[i%2][x]);
			str[i%2][x] ='\0';
			strcat(str[(i+1)%2],str[i%2]);
		}
		printf("%s\n",str[(n)%2]);
		scanf("%s",str[0]);
	}
	return 0;
}
