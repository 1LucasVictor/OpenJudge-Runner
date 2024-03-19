#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{

    int a[3] = {0};
    int num = 0;
    int i = 0;
    int j = 0;
    int biggest = 0;
    int idx;
    
    scanf("%d",&num);
    for (j = 0; j < num; j++) {
        scanf("%d %d %d",&a[0] ,&a[1] ,&a[2]);
        for (i = 0; i < 3; i++) {
            if (biggest < a[i] || i == 0) {
                biggest = a[i];
                idx = i;
                
            }
        }
        //printf("%d\n",biggest);
        if (idx == 0 && (pow(a[0], 2) == pow(a[1], 2) + pow(a[2], 2))) {
            printf("YES\n");
        }
        else if (idx == 1 && (pow(a[1], 2) == pow(a[0], 2) + pow(a[2], 2))) {
            printf("YES\n");
        }
        else if (idx == 2 && (pow(a[2], 2) == pow(a[1], 2) + pow(a[0], 2))) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        biggest = 0;
        idx = 0;
    }
    return 0;
}