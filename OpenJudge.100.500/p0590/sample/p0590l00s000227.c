#include<stdio.h>

int main(void)
{
        int a[6], r[10];
        int i, j, k=0;

        for(i = 0; i < 6; i++) {
                scanf("%d", &a[i]);
        }

        for(i = 0; i < 4; i++) {
                for(j = i+1; j < 5; j++) {
                        r[k] = a[j] - a[i];
                        k++;
                }
        }

        for(i = 0; i < 10; i++) {
                if(r[i] > a[5]) {
                        printf(":(");
                        return 0;
                }
        }
        printf("Yay!");
        return 0;
}