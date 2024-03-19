#include <stdio.h>
#include <string.h>

int max(int*);

int main(void){
    int a;
    int b;
    scanf("%d %d", &a, &b);
    
    int num[3];
    int n;
    num[0] = a+b;
    num[1] = a-b;
    num[2] = a*b;

    printf("%d\n",max(num));

    return 0;

}int max(int *all){
    int max=all[0];
    for(int i= 1; i<2; ++i){
        if(all[0] < all[i]){
            max = all[i];
        }
    }

    return max;
}