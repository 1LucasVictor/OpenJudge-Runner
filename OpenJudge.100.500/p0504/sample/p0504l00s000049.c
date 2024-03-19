#include<stdio.h>
     
int main(){
    int H, A, c = 0;
     
    scanf("%d %d", &H, &A);
     
    while (H > 0) {
        H -= A;
        c++;
    }
    printf("%d\n", c);
    
	return 0;
}