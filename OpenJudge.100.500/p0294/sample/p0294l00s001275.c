#include<stdio.h>

/*構造体の定義*/
typedef struct {
	char suit;
	int value;
} Card ;


void BubbleSort(Card A[], int N) {
	int i, j;
	Card temp;

	for (i = 0; i < N; i++) {
		for (j = N - 1; j >= i + 1; j--) {
			if (A[j].value < A[j - 1].value) {
				temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
			}
		}
	}
}


void SelectionSort(Card A[], int N) {
	int i, j;
	int minj;
	Card temp;

	for (i = 0; i < N; i++) {
		minj = i;
		for (j = i; j < N; j++) {
			if (A[j].value < A[minj].value) {
				minj = j;
			}
		}
		temp = A[i];
		A[i] = A[minj];
		A[minj] = temp;
	}
}



int main()
{
	int N;
	int i,j;
	
	scanf("%d\n", &N);

	Card BC[36];
	Card SC[36];

    
	for (i = 0; i < N; i++) {
		Card c;
		scanf("%c", &c.suit);
		scanf("%d ", &c.value);
		BC[i] = c;
		SC[i] = c;
	}
	
	/*
	for (i = 0; i < N; i++) {
		scanf("%c", &BC[i].suit);
		scanf("%d", &BC[i].value);
	}

	for (i = 0; i < N; i++) {
		SC[i] = BC[i];
	}
	*/
    
    BubbleSort(BC,N);
    SelectionSort(SC,N);
	
	/* Output */
	for (i = 0; i < N - 1; i++) {
		printf("%c%d ", BC[i].suit, BC[i].value);
	}
	printf("%c%d\n", BC[N - 1].suit, BC[N - 1].value);
	puts("Stable");

	for (i = 0; i < N - 1; i++) {
		printf("%c%d ", SC[i].suit, SC[i].value);
	}
	printf("%c%d\n", SC[N - 1].suit, SC[N - 1].value);

	for (i = 0; i < N; i++) {
		if (BC[i].suit != SC[i].suit) {
			puts("Not stable");
			return 0;
		}
	}
	puts("Stable");

	return 0;
}
