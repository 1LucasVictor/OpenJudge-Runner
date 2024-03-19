#include <stdio.h>
#include <stdlib.h>
#define N 16

int main(int argc, char *argv[]) {

	char input[N];
	fgets(input, N, stdin);
	char num_array[3][4];
	int i = 0, j = 0, k = 0;
	while (i < N && j < 3) {
		if (input[i] == ' ' || input[i] == '\0') {
			while( input[++i] == ' ' || input[i] == '\0'){}
			j++;
			num_array[j][k] = '\0'; 
			k = 0;
			continue;
		}
		num_array[j][k++] = input[i++];
	}
		
	
	int A = atoi(num_array[0]);
	int B = atoi(num_array[1]);
	int T = atoi(num_array[2]);
	
	int generate_num = T / A;
	int total_biskets = B * generate_num;
	
	printf("%d", total_biskets);
	
}