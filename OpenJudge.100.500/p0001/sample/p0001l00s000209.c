#include<stdio.h>

int main(){
	
	int a[3], b[3], o[3], j[3], i;
	
	j[0] = j[1] = j[2] = 1;
	
	for(i = 0; i < 3; i++){
	
		scanf("%d%d", &a[i], &b[i]);
	
		o[i] = a[i] + b[i];
		while(o[i] >= 10){
		
			j[i]++;
		
			o[i] /= 10;
		
		}
	
	}
	
	printf("%d\n%d\n%d\n", j[0], j[1], j[2]);

    return 0;
}