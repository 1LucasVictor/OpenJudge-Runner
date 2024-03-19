#include <stdio.h>
# include <stdlib.h>

int ord(const void * x, const void * y){
	int a = *((int *) x), b = *((int *) y);
 
	if (a<b)
		return -1;
	if (a>b)
		return 1;
 
	return 0;
 
}
 

int main() {
    int n;
    scanf("%d", &n);
    int vec[n];
    
    for (int i = 0; i < n; ++i)
        scanf("%d", &vec[i]);
        
    qsort(vec, n, sizeof(vec[0]), ord);
    int a = 0;
    for (int i = 0; i < n-1; ++i){
        if (vec[i] == vec[i+1]){
            a = 1;
            break;
        }
    }
    if ( a == 1)
        printf("NO\n");
    else
        printf("YES\n");
    


    return 0;
}
