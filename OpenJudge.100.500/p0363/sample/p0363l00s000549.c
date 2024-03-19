#include <stdio.h>
#include <stdlib.h>

#define NUM 3

void shuf(int []);
int judge(int []);

void shuf(int a[NUM]){
	
	int l = 0;
	int x = 0, y = 0;
	
	x = rand() % 3;
	y = rand() % 3;
	while(x == y) {
		y = rand() % 3;
	}
	
	l = a[x];
	a[x] = a[y];
	a[y] = l;
	
}

int judge(int a[NUM]) {
	
	int flag = 0;
	
	if(a[0] < a[1] && a[1] < a[2])  flag = 1;
	
	return flag;
	
}

int main(int argc, char *argv[]) {
	
	int in[NUM] = {0};
	
	fscanf(stdin, "%d %d %d", in, in+1, in+2);
	
	while(judge(in) == 0) {
		shuf(in);
	}
	
	fprintf(stdout, "%d %d %d\n", in[0], in[1], in[2]);
	
	return 0;

}