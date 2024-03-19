
#include <stdio.h>

int main() {
    int size; 
    scanf("%d",&size);
    
    int i;
    int document[size];
    
    for (i = 0; i < size; i++) {
        scanf("%d",&document[i]);
    }
    
    for (i = 0; i < size; i++) {
        if (document[i]%2 == 0) {
            if ((document[i]%3 != 0) && (document[i]%5 != 0)) {
                printf("DENIED");
                return 0;
            }
        }
    }
    printf("APPROVED");
    return 0;
}