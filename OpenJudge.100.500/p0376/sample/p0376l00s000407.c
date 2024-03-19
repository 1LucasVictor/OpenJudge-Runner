#include <stdio.h>
#include <math.h>

int main(){
    FILE *fp=fopen("a.txt", "w");    
    int n;
    int a[100];

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=n-1; i>=0; i--){
        printf("%d", a[i]);
        if(i > 0){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }

    return 0;
}
