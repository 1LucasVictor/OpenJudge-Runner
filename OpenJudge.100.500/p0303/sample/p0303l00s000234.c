#include <stdio.h>
#include <stdlib.h>

#define ANSMAX 1000000000
unsigned long long int n , k , *arr;

unsigned long long int Serach(unsigned long long int pc){
	unsigned long long int ktmp =0 ,pt = pc , i=0;
	while (1){
		if(arr[i] > pt ){ break;}
		else if(pc >= arr[i]){
			pc -= arr[i];
			i++;
			if(i == n ){
				break;
			}
		}
		else {
			ktmp++;
			if(ktmp == k ){break;} 
			pc = pt ;
		} 
	}
	return i;
}
int main(){
	scanf("%llu %llu",&n,&k);
	arr = (unsigned long long int *)malloc(n * sizeof(unsigned long long int ));
	for(int i =0 ; i < n ; i++){
		scanf("%llu",&arr[i]);
	}
	unsigned long long int l = 0, r = ANSMAX ,res;
	while (1){
		if( l + 1 >=  r){break;}
		unsigned long long int m = (l + r)/2;
		res = Serach(m);
		if(res <  n){l = m;	
		}
		else {r = m;	
		}

	}
	
	printf("%llu\n",r);
	
	return 0;
}

