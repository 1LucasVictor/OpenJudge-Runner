#include<stdio.h>

int main(void){
	int a, b, ga, gb, ca, cb, i=0, j, r, ri;
	int lcm_num[101], gcd_num[101];
	
	for(ri=0;ri<100;ri++){
		lcm_num[ri] = 0;
		gcd_num[ri] = 0;
	}
	
	while(scanf("%d %d",&a, &b)!=EOF){
		ga = a;
		gb = b;
		ca = a;
		cb = b;
		if(a!=0||b!=0){
			while((r=ga%gb)!=0){
				ga = gb;
				gb = r;
			}
			gcd_num[i] = gb;
			lcm_num[i] = (ca/gcd_num[i])*b;
			i++;
		}
	}
	
	for(j=0;j<i;++j){
		printf("%d %d\n",gcd_num[j],lcm_num[j]);
	}
	
	return 0;
}