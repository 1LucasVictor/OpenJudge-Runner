#include<stdio.h>
#include<math.h>

int main(){
	int a[10], b, i, j, k, ans[11];
	i = 0;
	j = 0;
	for(k = 0; k < 11; k++) ans[k] = 0;
	while(scanf("%d", &b) != EOF){
		if(b == 0){
			i--;
			ans[j] = a[i];
			printf("%d\n", ans[j]);
			j++;
		}else{
			a[i] = b;
			i++;
		}
	}
	return 0;
}