#include<stdio.h>

int i,x=0;
int a[10000];

int main(){  

    while(x<3){
        scanf("%d", &a[x]);
        if(x==1){
            if(a[x] < a[x-1]){
                i = a[x];
                a[x] = a[x-1];
                a[x-1] = i;
            }
        } else if(x==2) {
            if(a[0] > a[x]){
                i = a[x-1];
                a[x-1] = a[x];
                a[x] = i;
                i = a[0];
                a[0] = a[x-1];
                a[x-1] = i;
            } else if(a[x] < a[x-1]){
                i = a[x];
                a[x] = a[x-1];
                a[x-1] = i;
            }
        }
        x++;
    }
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}
