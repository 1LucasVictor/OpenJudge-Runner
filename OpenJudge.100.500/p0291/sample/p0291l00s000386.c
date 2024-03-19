#include<stdio.h>
#include<stdlib.h>
#define max(a,b) (a>b?a:b)
#define mini -1000000008

typedef struct value {
    //int n[200000];
    int max;
    int R;
} Value;

int main(){
    int i, j;
    Value *value;
    int n;
    int r;
    int ma;
    int diff;

    scanf("%d", &n);
    value = calloc(n, sizeof(Value));

    for(i=0;i<n;i++){
        scanf("%d",&value[i].R);
        ma = mini;
        for(j=0;j<i;j++){
            //value[i].n[j]=value[i].R-value[j].R;
            diff=value[i].R-value[j].R;
            ma = max(diff, ma);
        }
        value[i].max = ma;
    }
    ma = mini;
    for(i=0;i<n;i++){
        ma = max(ma, value[i].max);
    }
    printf("%d\n", ma);

    return 0;
}
