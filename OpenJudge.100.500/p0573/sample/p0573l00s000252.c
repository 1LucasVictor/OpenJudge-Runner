#include<stdio.h>
int main(){
	char a[5];
	int count=0;
	scanf("%s",a);
	for(int i=0;i<4;++i){
		for(int j=i+1;j<4;++j){
			if(a[i]==a[j])
				count ++;
		}
	}
	if(count==2)
		printf("Yes");
	else
		printf("No");
		return 0;
	}
	
				