#include <stdio.h>

int main()
{
    int i,arr[10],c5=0,c7=0;
    for(i=0; i<3; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 5) {
            c5 = c5 + 1;
        }
        if(arr[i] == 7) {
            c7 = c7 + 1;
        }
    }
    
    if((c5 == 2) && (c7 == 1)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
}