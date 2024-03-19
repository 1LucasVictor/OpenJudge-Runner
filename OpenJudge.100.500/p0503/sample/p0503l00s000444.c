#include <stdio.h>

int med3(int x, int y, int z){
	if(x<y){
		if(y<z){
			return y;
		}
		else if(z<x){
			return x;
		}
		else{
			return z;
		}
	}
	else{
		if(x<z){
			return x;
		}
		else if(z<y){
			return y;
		}
		else{
			return z;
		}
	}
}

void sort(int a[], int left, int right){
	if(left<right){
		int i=left, j=right;
		int pivot=med3(a[i], a[i+(j-i)/2], a[j]);
		int temp;
		while(1){
			while(a[i]<pivot){
				i++;
			}
			while(pivot<a[j]){
				j--;
			}
			if(i>=j){
				break;
			}
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
			i++;
			j--;
		}
		sort(a, left, i-1);
		sort(a, j+1, right);
	}

}

int main(void){
	int array[210000], n, k, j, i;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	sort(array, 0, n-1);
	for(i=1; i<n; i++){
      if(array[i-1]==array[i]){
        printf("NO\n");
        return 0;
      }
    }
  printf("YES\n");
  return 0;
  
	
}