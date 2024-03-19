#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>


typedef  long long ll;

int int_cmp(const void *a, const void *b){ 
    const int *ia = (const int *)a;
    const int *ib = (const int *)b;
    return *ia  - *ib; 
} 



int max(int a,int b){
	if(a<b)
		a=b;
	return a;	
}

int min(int a,int b){
	if(a>b)
		a=b;
	return a;	
}

int absolu(int n){
	if(n<0)
		n*=-1;
	
	return n;	
}


void solve(){
	int x;
	scanf("%d",&x);
	
	if(x>=30)
		printf("Yes\n");
	else 
		printf("No\n");	
}



int main(){
  /* int t;
	scanf("%d",&t);
	
	while(t--)*/
		solve();
	
	
	
	return 0;
}	
					
