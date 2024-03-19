#include<stdio.h>
#include<math.h>
int prime_count(int[], int);
int main(void){
    int n, i, x[10000];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    printf("%d\n", prime_count(x, n));
    return 0;
}
int prime_count(int a[], int n){
    int i, W = 0, j ,root, flag;
    for(i = 0;i <n; i++){
        //printf("%d ", a[i]);
        if(a[i] == 2){
            W++;
        }else if(a[i] % 2 == 0 || a[i] == 1){
            continue;
        }else{
            root = sqrt(a[i]);
            //printf("%d\n", root);
            flag = 1;
            for(j = 3; j < root + 1; j++){
                if(a[i] % j == 0){
                    flag = 0;
                }
            }
            if(flag){
                W++;
            }
        }
    }
    return W;
}

