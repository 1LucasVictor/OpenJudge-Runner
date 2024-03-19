#include<stdio.h>
#include<string.h>
int main(void){
	int a[10000];
	int i,j;

	for(i=0;i<10000;i++)a[i]=0;

	i=0;
	while(1){
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&a[i]);
		if(a[i]==0){
			if(a[i-1]!=0){
				printf("%d\n",a[i-1]);
				a[i-1]=0;
			}else{
				for(j=i-1;j>=0;j--){
					if(a[j]!=0){
						printf("%d\n",a[j]);
						a[j]=0;
						break;
					}
				}
			}
		}
		if(a[0]==0){
			break;
		}
		i++;
	}

	return 0;
}