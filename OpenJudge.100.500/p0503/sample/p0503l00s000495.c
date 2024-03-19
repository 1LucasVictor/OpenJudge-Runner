#include<stdio.h>

#define MAXSIZE 200000

int partition(int m[], int l, int r){
	int i, j, pivot;
	int t;

	i = l-1;
	j = r;
	pivot = m[r];

	for(;;){
		while(m[++i] < pivot){
			;
		}
		while(i < --j && pivot < m[j]){
			;
		}
		if(i >= j){
			break;
		}
		t = m[i];
		m[i] = m[j];
		m[j] = t;
	}
	t = m[i];
	m[i] = m[r];
	m[r] = t;

	return i;
}

void quick_sort(int m[], int l, int r){
	int v;

	if(l >= r){
		return;
	}

	v = partition(m, l, r);
	quick_sort(m, l, v-1);
	quick_sort(m, v+1, r);
}

int main(){
	int n;
	int a[MAXSIZE] = {0};
	int i;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", a+i);
	}

	quick_sort(a, 0, n-1);

	for(i=0; i<n; i++){
		if(a[i] == a[i+1]){
			printf("NO");
			return 0;
		}
	}

	printf("YES");
	return 0;
}
