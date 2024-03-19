#include<stdio.h>

int main()
{
  int int_n = 0;  // n
  int int_m = 0;  // m
  int int_l = 0;  // l

  int int_col_max = 0;  // 最大列数
  int int_row_max = 0;  // 最大行数

  int int_cnt_col = 0;  // 列数カウント用
  int int_cnt_row = 0;  // 行数カウント用

  int int_cnt_k = 0;  // 計算用カウント
  int int_max_k = 0;  // 最大計算用カウント
  unsigned long lng_cal = 0;  // 計算用値

  unsigned long lng_a_array[100][100] = { 0 }; // 行列A
  unsigned long lng_b_array[100][100] = { 0 }; // 行列B
  unsigned long lng_c_array[100][100] = { 0 }; // 行列C

  // 1行目:n,m,l取得
  scanf("%d %d %d",&int_n ,&int_m, &int_l);

  // 2行目:行列A(n*m)取得
  int_row_max = int_n;
  int_col_max = int_m;
  for (int_cnt_row = 0; int_cnt_row < int_row_max; int_cnt_row++)
  {
    for (int_cnt_col = 0; int_cnt_col < int_col_max; int_cnt_col++)
    {
      scanf("%lu",&lng_a_array[int_cnt_row][int_cnt_col]);
    }
  }

  // 3行目:行列B(m*l)取得
  int_row_max = int_m;
  int_col_max = int_l;
  for (int_cnt_row = 0; int_cnt_row < int_row_max; int_cnt_row++)
  {
    for (int_cnt_col = 0; int_cnt_col < int_col_max; int_cnt_col++)
    {
      scanf("%lu",&lng_b_array[int_cnt_row][int_cnt_col]);
    }
  }

  // 行列C作成
  int_row_max = int_n;
  int_col_max = int_l;
  int_max_k = int_m;
  for (int_cnt_row = 0; int_cnt_row < int_row_max; int_cnt_row++)
  {
    for (int_cnt_col = 0; int_cnt_col < int_col_max; int_cnt_col++)
    {
      lng_cal = 0;
      for (int_cnt_k = 0; int_cnt_k < int_max_k; int_cnt_k++)
      {
        lng_cal += (lng_a_array[int_cnt_row][int_cnt_k] * lng_b_array[int_cnt_k][int_cnt_col]);
      }
      lng_c_array[int_cnt_row][int_cnt_col] = lng_cal;
    }
  }

  // 行列C表示
  int_row_max = int_n;
  int_col_max = int_l;
  for (int_cnt_row = 0; int_cnt_row < int_row_max; int_cnt_row++)
  {
    for (int_cnt_col = 0; int_cnt_col < int_col_max; int_cnt_col++)
    {
      if(int_cnt_col > 0)
      {
        printf(" ");
      }
      printf("%lu",lng_c_array[int_cnt_row][int_cnt_col]);
    }
      printf("\n");
  }

  return 0; 
}
