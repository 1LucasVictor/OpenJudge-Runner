#include<stdio.h>
int main(){
    int a[1000],b[1000], j,k=0,i,n,m=0,h;
	
	scanf("%d", &n);
	
	for(j=0; j< n;j++){
		scanf("%d", &a[j]);
	}
	
	for(j=0; j<n; j++){
	if(a[j]%2==0){
		b[k]=j;
		k++;
	}
	}
		
	for(j=0; j<k;j++){
		i=a[b[j]];
		if(i%3==0||i%5==0){
			m++;
		}
	}
	
		if(m==k){
	printf("APPROVED \n");
		    return 0;
		}
		
		else{
			
	printf("DENIED \n");
		    return 0;
		}
}