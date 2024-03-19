#include <stdio.h>
#define N 1000000

int partion(int a[],int l,int r){
    int i,j,pivot,t;

    i=l-1;
    j=r;
    pivot=a[r];
    for(;;){
        while(a[++i]<pivot)
            ;
        while(i < --j && pivot < a[j])
            ;
        if(i>=j)
            break;
        t=a[i];a[i]=a[j];a[j]=t;
    }

    t=a[i]; a[i]=a[r];a[r]=t;
    return i;
}

void quick_sort_1(int a[],int l, int r){
    int v;
    if(l>=r)
        return ;
    v=partion(a,l,r);

    quick_sort_1(a,l,v-1);
    quick_sort_1(a,v+1,r);
}
void quick_sort(int a[],int n){
    quick_sort_1(a,0,n-1);
}

void main(){
    static int a[N];
    int n,i;
    scanf("%d",&n);
    for (i = 0; i <n ; ++i) {
        scanf("%d",&a[i]);
    }
    quick_sort(a,n);
    for (i = 0; i < n; ++i) {
        if(a[i]==a[i+1]){
            printf("NO");
            return ;
        }
    }
    printf("YES");
    return ;
}