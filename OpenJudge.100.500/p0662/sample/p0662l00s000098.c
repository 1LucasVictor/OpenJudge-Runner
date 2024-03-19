#include <stdio.h>
int max(int a, int b){
	return a > b ? a: b;
}
int min(int a, int b){
	return a < b ? a: b;
}
int main(){
	int a, b, c, d, st, end, dois;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	st = max(a, c);
	end = min(b, d);
	if(end > st)//se quando o segundo apertou, o primero ainda nao soltou
		dois = end - st;
	else
		dois = 0;
	printf("%d\n", dois);
}
