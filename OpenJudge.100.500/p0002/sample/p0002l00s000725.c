#include <stdio.h>

void swap(int *a, int *b) 
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) 
{
    int dataset_num;
    int a, b, c, i;
    scanf("%d", &dataset_num);
    for (i=0; i<dataset_num; i++){
        scanf("%d%d%d", &a, &b, &c);
        if (a < b) {
            swap(&a, &b);            
        }
        if (a < c) {
            swap(&a, &c);
        }
        if (a*a == (b*b + c*c)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

