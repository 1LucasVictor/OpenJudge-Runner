#include<stdio.h>

int n;
int a[10001];
int i;
int j;
int k;


int main(void){

	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%3==0){
			a[j] = i;
			j++;
		}else{
		if(i%10==3){
			a[j] = i;
			j++;
		}else{
		if(i/10%10==3){
			a[j] = i;
			j++;
		}else{
		if(i/100%10==3){
			a[j] = i;
			j++;

		}else{
		if(i/1000%10==3){
			a[j] = i;
			j++;
			}
		}
	}			
}
}
}
	for(k=0;k<j;k++){
printf(" %d",a[k]);
}

printf("\n");

return 0;

}
