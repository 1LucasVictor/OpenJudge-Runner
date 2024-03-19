#include <stdio.h>

int sort(int i,int j){
	int c;
	if(i>j){
		c = i;
		i = j;
		j = c;
	}
	return 0;
}
int main(){
	int a,b;
	scanf("%d",&a);
	int i,j,k;
	for(b = 0;b < a;b++){
		scanf("%d %d %d",&i,&j,&k);
		sort(i,j);
		sort(j,k);
		sort(i,j);
		if(k*k == (i*i) + (j*j)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}