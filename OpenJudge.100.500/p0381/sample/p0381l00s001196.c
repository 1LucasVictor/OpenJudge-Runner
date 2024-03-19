#include<stdio.h>

int main(void)
{
    int i,j,k;
    int x[300];
    int n[100];
    int count[300]= {0};
    int a = 0;
    int c = 0;

    do {

    scanf("%d %d",&n[a], &x[a]);

    a += 1;
    c = a;
    } while (n[a-1] != 0 && x[a-1] != 0);

    for(a = 0; a < c - 1; a++){

    for(i = 1; i < n[a]; i++){
        for(j = 1; j < n[a]; j++){
            for(k = 1; k <= n[a] ; k++){

            if(i + j + k == x[a] && i < j && j < k){
                count[a] += 1;
            }
            }
        }
    }

    printf("%d\n",count[a]);
    }
    return 0;
}
