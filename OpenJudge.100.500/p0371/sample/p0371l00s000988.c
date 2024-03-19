#include<stdio.h>
int main() {
	int n,i,data[10000],min,max,sum = 0;
	scanf("%d",&n);
	if(0 < n && n <= 10000) {
		for(i = 0;i < n;i++) {
			scanf("%d",&data[i]);
		}
		min = data[0]; max = data[0];
		for(i = 0;i < n;i++) {
			if(data[i] < min) {
				min = data[i];
			} else if(data[i] > max) {
				max = data[i];
			}
			sum += data[i];
		}
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}