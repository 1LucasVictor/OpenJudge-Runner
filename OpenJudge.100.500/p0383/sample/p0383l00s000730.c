#include <stdio.h>

int main( void )
{
	int n, m, l, line_cou, column_cou, repeat_cou;
	long int matrix_A[100][100] = {};
	long int matrix_B[100] [100]= {};
	long int ans_A, ans_B;
	long int product[100][100] = {};
	
	ans_A = 0;
	ans_B = 0;
	
	scanf( "%d %d %d", &n, &m, &l );
	
	for( line_cou = 0; line_cou < n; line_cou++ )
	{
		for( column_cou = 0; column_cou < m; column_cou++ )
		{
			scanf( "%d", &matrix_A[line_cou][column_cou] );
		}
	}
	
	for( line_cou = 0; line_cou < m; line_cou++ )
	{
		for( column_cou = 0; column_cou < l; column_cou++ )
		{
			scanf( "%d", &matrix_B[line_cou][column_cou] );
		}
	}
	
	for( repeat_cou = 0; repeat_cou < n; repeat_cou++ )
	{
		for( line_cou = 0; line_cou < l; line_cou++ )
		{
			ans_B = 0;
			for( column_cou = 0; column_cou < m; column_cou++ )
			{
				ans_A = 0;
				ans_A = matrix_A[line_cou][column_cou] * matrix_B[column_cou][repeat_cou];
				ans_B = ans_B + ans_A;
			}
			product[repeat_cou][line_cou] = ans_B;
		}
	}
	
	for( repeat_cou = 0; repeat_cou < l; repeat_cou++ )
	{
		for( line_cou = 0; line_cou < n - 1; line_cou++ )
		{
			printf( "%ld ", product[line_cou][repeat_cou] );
		}
		printf( "%ld\n", product[line_cou][repeat_cou] );
	}
	
	return 0;
}