#include <stdio.h>
#include <string.h>

/* 配列の要素を交換する */
void Swap(int x[ ], int i, int j)
{
    int temp;
    
    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
}

/* クイックソートを行う */
void QSort(int x[ ], int left, int right)
{
    int i, j;
    int pivot;
    
    i = left;                      /* ソートする配列の一番小さい要素の添字 */
    j = right;                     /* ソートする配列の一番大きい要素の添字 */
    
    pivot = x[(left + right) / 2]; /* 基準値を配列の中央付近にとる */
    
    while (1) {                    /* 無限ループ */
        
        while (x[i] < pivot)       /* pivot より大きい値が */
            i++;                   /* 出るまで i を増加させる */
        
        while (pivot < x[j])       /* pivot より小さい値が */
            j--;                   /*  出るまで j を減少させる */
        if (i >= j)                /* i >= j なら */
            break;                 /* 無限ループから抜ける */
        
        Swap(x, i, j);             /* x[i] と x[j]を交換 */
        i++;                       /* 次のデータ */
        j--;
    }
    //ShowData(x, 10);               /* 途中経過を表示 */
    
    if (left < i - 1)              /* 基準値の左に 2 以上要素があれば */
        QSort(x, left, i - 1);     /* 左の配列を Q ソートする */
    if (j + 1 <  right)            /* 基準値の右に 2 以上要素があれば */
        QSort(x, j + 1, right);    /* 右の配列を Q ソートする */
}

int main(void){
  int n, i, result=0;
  int a[200001];
  
  scanf("%d", &n);
  
  for(i=0;i<n;i++) scanf("%d", &a[i]);
  
  QSort(a, 0, n-1);
  
  for(i=0;i<n-1;i++){
    if(a[i] == a[i+1]){
      result = 1;
      break;
    }
  }
  
  if(result == 0) printf("YES");
  else printf("NO");
  
  return 0;
}