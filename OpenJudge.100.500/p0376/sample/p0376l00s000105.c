#include <stdio.h>

#define MAX 100

void sort_reverse(int n, int arr1[], int arr2[]) {
    int x=0;
    int i, j=1000, k, l=0;

    while (j > 0) {
        for (i=0; i<n; i++) {
	    if (arr1[i] == j) x++;
	}

	for (k=0; k<x; k++) {
	    arr2[l] = j;
	    l++;
	}
        x = 0;
	j--;
    }
}

void process(int n) {
    int array1[MAX], array2[MAX];
    int i, x;

    i = 0;
    while (i < n) {
        scanf("%d", &x);
	array1[i] = x;
	i++;
    }
    
    sort_reverse(n, array1, array2);

    i=0;
    while (i<n) {
        printf("%d", array2[i]);
	
	if (i == n-1) {
	    printf("\n");
	} else {
	    printf(" ");
	}
	i++;
    }
}

void scanner() {
    int n;
    scanf("%d", &n);
    process(n);
}

int main(void) {
    scanner();
    return 0;
}
