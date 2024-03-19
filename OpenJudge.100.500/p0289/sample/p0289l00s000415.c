#include<stdio.h>
int Euclid(int,int);
int main(){
  int x,y,n;             //x,y 入力される数字用 n 最大公約数を求める用
  scanf("%d %d",&x,&y);
  printf("%d\n",Euclid(x,y));
  
  return 0;
}
int Euclid(int x,int y){
  int n;
  if(x == y)return x;// xとyが同じならその値いが最大公約数
  else{              //そうでなければ、ユークリッドの互除法を計算
    if(x > y){        //xの方が大きいとき
      n = x % y;
      if(x%n==0 && y%n==0)return n;
      else return Euclid(y,n);
    }
    else{
      n = y % x; //yの方が大きいとき
      if(x%n==0 && y%n==0)return n;
      else return Euclid(x,n);
    }
  }
}

