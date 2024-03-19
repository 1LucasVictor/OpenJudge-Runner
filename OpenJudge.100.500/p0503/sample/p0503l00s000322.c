#include <stdio.h>
void qsort(int a[],int l,int r){
    int i,j,t,p;
    if(l < r){
        i = l;
        j = r + 1;
        p = l;
        do{
            do{
                i ++;
            }while(a[i] < a[p]);
            do{
                j --;
            }while(a[p] < a[j]);
            if(i < j){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }while(i < j);
        t = a[p];
        a[p] = a[j];
        a[j] = t;
        p = j;
        qsort(a,l,p - 1);
        qsort(a,p + 1,r);
    }
}
int main(void){
    int n, a[300000];
    int i,j;
    int flg = 0;
    scanf("%d", &n);
    for(i = 0;i < n;i ++){
        scanf("%d", &a[i]);
    }
    qsort(a, 0, n - 1);
    for(i = 0;i < n;i ++){
        if(a[i] == a[i + 1]){
            flg = 1;
            break;
        }
    }
    if(flg == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}