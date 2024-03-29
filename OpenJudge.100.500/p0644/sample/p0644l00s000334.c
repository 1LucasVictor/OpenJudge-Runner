#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ABC081A (const unsigned int const * given_data)
{
	// local variables for this function
	int          retval_scanf;
	unsigned int iter;
	unsigned int num_marbles;

	// STEP.01
	// find the number of squares on which Sunuke will place a marble
	num_marbles = 0;
	iter        = *given_data;

	while (iter > 0)
	{
		num_marbles += iter % 10;
		iter        /=        10;
	}

	// STEP.03
	// print the answer of this task to the standard output
	printf( "%d\n", num_marbles );

	// STEP.END
	return;
}

int main (void)
{
	// variables for this function
	unsigned int given_data;
	int          retval_scanf;

	// STEP.01
	// read out the given string
	retval_scanf = scanf("%d", &given_data);

	// STEP.02
	// calculate & output the answer
	ABC081A(&given_data);

	// STEP.END
	return EXIT_SUCCESS;
}