#include <stdio.h>

int calcGCD(int a,int b){
	//??????????????????????????????
	int temp,i,r;
	//??????a???????????§???????????????????????????
	if(a < b){
		temp = a;
		a = b;
		b = temp;
	}
	while(1){
		r = a % b;
		if(r == 0) break;
		a = b; b = r;
	} 	
	return b;
}

long calcLCM(int a,int b){
	return ((long)a * b) / calcGCD(a, b);
}

int main(void){
    int a,b;
	
    while(scanf("%d %d", &a, &b) != EOF){	
        printf("%d %lu\n", calcGCD(a, b), calcLCM(a, b));
    }
	
	return 0;
}