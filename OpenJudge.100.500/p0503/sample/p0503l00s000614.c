#include<stdio.h>

void sort (int array[],int left,int right) {
  int i, j, k, mid;
  int work[10];
  if (left < right) {
    mid = (left + right)/2;
    sort(array, left, mid);
    sort(array, mid+1, right);
    for (i = mid; i >= left; i--) { work[i] = array[i]; }
    for (j = mid+1; j <= right; j++) {
      work[right-(j-(mid+1))] = array[j];
    }
    i = left; j = right;
    for (k = left; k <= right; k++) {
      if (work[i] < work[j]) { array[k] = work[i++]; }
      else                   { array[k] = work[j--]; }
    }
  }
}

int main(void){
	unsigned int n,b;
	b=0;
	scanf("%u",&n);
	unsigned int a[n];
	for(int i=0;i<n;i++){
		scanf("%u",&b);
		a[i]=b;
	}
	b=0;

	sort(a,0,n-1);

	for(int i=1;i<n;i++){
		if(a[i-1]==a[i]){
			printf("NO");
			b=1;
			break;
		}
	}
	if(b==0){
		printf("YES");
	}
	
	return 0;
}