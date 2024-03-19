#include<stdio.h>

int main(){
	int a[3], m;
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	for(int i=0;i<3;i++){
		if(a[i]==5 || a[i]==7){
		
		}else{
			break;
		}
		m+=a[i];
	}
	if(m==17){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
