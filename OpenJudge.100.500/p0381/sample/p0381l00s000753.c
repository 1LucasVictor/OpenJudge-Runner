#include <stdio.h>

int main(int argc, char** argv){
	int n,x;
	int stack[100],stack_posi,sum,check_num,ptn_cnt;
	int found;

	for(;;){
		// Input
		scanf("%d %d", &n, &x);
		// Finish Check
		if( n == 0 && x == 0 ){
			break;
		}
		// Search Pattern
		stack_posi = -1;
		sum = 0;
		check_num = 1;
		ptn_cnt = 0;
		for(;;){
			// Check Length & Total
			if( stack_posi == 2 ){
				if( sum == x ){
					ptn_cnt++;
					// Success & Search Next Pattern
					sum -= stack[stack_posi];
					check_num = stack[stack_posi] + 1;
					stack_posi--;
					continue;
				} else {
					// Fail & Search Next Pattern
					sum -= stack[stack_posi];
					check_num = stack[stack_posi] + 1;
					stack_posi--;
					continue;
				}
			} else if( sum == x ){
				// Fail & Search Next Pattern
				sum -= stack[stack_posi];
				check_num = stack[stack_posi] + 1;
				stack_posi--;
				continue;
			}
			// Get Next Number
			found = 0;
			while( check_num <= n ){
				if( sum + check_num <= x ){
					// Save Current Number & Search Next Number
					stack_posi++;
					stack[stack_posi] = check_num;
					sum += check_num;
					check_num++;
					found = 1;
					break;
				}
				check_num++;
			}
			if( found ){
				continue;
			}
			if( stack_posi >= 0 ){
				// Fail & Search Next Pattern
				sum -= stack[stack_posi];
				check_num = stack[stack_posi] + 1;
				stack_posi--;
				continue;
			} else {
				// No More Other Pattern
				break;
			}
		}
		// Output Pattern Count
		printf("%d\n",ptn_cnt);
	}

	return 0;
}