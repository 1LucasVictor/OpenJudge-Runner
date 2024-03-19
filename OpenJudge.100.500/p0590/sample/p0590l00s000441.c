#include <stdio.h>

int main (void)
{
  int a,b,c,d,e,k;
  int temp;
  int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  scanf("%d", &k);

  if(e > d){
     temp = d;
     d = e;
     e = temp;
   }
   if(d > c){
     temp = c;
     c = d;
     d = temp;
   }
   if(c > b){
     temp = b;
     b = c;
     c = temp;
   }
  if(b > a){
    temp = a;
    a = b;
    b = temp;
  }

  m1 = a - b;
  m2 = a - c;
  m3 = a - d;
  m4 = a - e;
  m5 = b - c;
  m6 = b - d;
  m7 = b - e;
  m8 = c - d;
  m9 = c - e;
  m10 = d - e;

  if(m1 > k) printf(":(");
  else if(m2 > k) printf(":(");
  else if(m3 > k) printf(":(");
  else if(m4 > k) printf(":(");
  else if(m5 > k) printf(":(");
  else if(m6 > k) printf(":(");
  else if(m7 > k) printf(":(");
  else if(m8 > k) printf(":(");
  else if(m9 > k) printf(":(");
  else if(m10 > k) printf(":(");
  else printf("Yay!");

}