#include <stdio.h>

int main(void) {
    int A[3];
    int a7,a5;
    a7 = a5 = 0;
    
    for(int i = 0;i < 3 ; i++){
        scanf("%d",&A[i]);
    }
    
    for(int i = 0; i < 3;i++){
        if(A[i] == 5){
            a5++;
        }
        if(A[i] == 7){
            a7++;
        }
    }
    if(a5 == 2 && a7 == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    
    //printf("%d",A);
	return 0;
}

