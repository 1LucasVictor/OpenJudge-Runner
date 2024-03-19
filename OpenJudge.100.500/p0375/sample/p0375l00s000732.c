#include<stdio.h>

int n;
int i;
int j;
int a[10000];

int main(void){
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%3 == 0){
			a[j] = i;
			j++;
		}else{
			if(i%10 == 3){
				a[j] = i;
				j++;
			}else{
				if(i/10 == 3){
					a[j] = i;
					j++;
				}
			}
		}
	}
	for(j=0;j<n;j++){
	printf(" %d",a[j]);
	
	if(a[j+1] == 0){
		break;
	}
	}
	printf("\n");
return 0;
}