#include <stdio.h>
 
typedef long long int value_type; /* ソートするキーの型 */
 
value_type med3(value_type x, value_type y, value_type z)
/* x, y, z の中間値を返す */
{
    if (x < y)
        if (y < z) return y; else if (z < x) return x; else return z; else
        if (z < y) return y; else if (x < z) return x; else return z;
}
 
void quicksort(value_type a[],long long int left, long long int right)
/* クイックソート
 * a     : ソートする配列
 * left  : ソートするデータの開始位置
 * right : ソートするデータの終了位置
 */
{
    if (left < right) {
        long long int i = left, j = right;
        value_type tmp, pivot = med3(a[i], a[i + (j - i) / 2], a[j]); /* (i+j)/2ではオーバーフローしてしまう */
        while (1) { /* a[] を pivot 以上と以下の集まりに分割する */
            while (a[i] < pivot) i++; /* a[i] >= pivot となる位置を検索 */
            while (pivot < a[j]) j--; /* a[j] <= pivot となる位置を検索 */
            if (i >= j) break;
            tmp = a[i]; a[i] = a[j]; a[j] = tmp; /* a[i],a[j] を交換 */
            i++; j--;
        }
        quicksort(a, left, i - 1);  /* 分割した左を再帰的にソート */
        quicksort(a, j + 1, right); /* 分割した右を再帰的にソート */
    }
}
 
 
int main(void){
    long long int n,i,l,count;
 
    scanf("%lld",&n);
 
    long long int h[n];
 
    for(i=0; i<n; i++){
        scanf("%lld",&h[i]);
    }
 
    quicksort(h,0,n-1);

    count = 0;

    for(l=0;l<n;l++){
        if(h[l]==h[l+1]){
            count++;
        }
    }

    if(count==0){
        printf("YES");
    }

    else{
        printf("NO");
    }
}