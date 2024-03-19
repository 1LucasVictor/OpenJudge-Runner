#include <stdio.h>
#define MAX 2000001

void quick(int *,int,int);

int main() {
     long int n;
    static int a[MAX];
    scanf("%ld", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    quick(a,0,n);
    for (int i = 0; i < n; ++i) {
        if(a[i]==a[i+1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
void quick(int a[],int left, int right){
    int s,t,i,j;

    if(left<right){
        s=a[left];  //左端の項を軸にする
        i=left; j=right+1;  //軸より小さいグループと大きいグループに分ける
        while(1){
            while(a[++i]<s);
            while(a[--j]>s);
            if(i>=j) break;
            t=a[i];a[i]=a[j];a[j]=t;
        }
        a[left]=a[j];a[j]=s;    //軸を正しい位置に入れる

        quick(a,left,j-1);  //左部分列に対する再起呼び出し
        quick(a,j+1,right); //右部分列に対する再起呼び出し
    }
}
