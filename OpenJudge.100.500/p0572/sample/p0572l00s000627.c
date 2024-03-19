#include<stdio.h>
#include<math.h>

int main()
{
  int L, R, k=0;
  int a = 0, t, t2, i;

  scanf("%d", &L);
  scanf("%d", &R);

  t = L % 2019;
  t2 = (L+1) % 2019;

  for(i=0; L+i<=R; i++){
    if((((L+i) % 2019) * ((L+i+1) % 2019))>=2019){
      printf("%d", a);
      k++;
    }
  }



  if(L+(2019-t) < R){
    printf("%d", a);
    k++;
  }


  if(k==0){
    printf("%d", (t*t2)%2019);
  }

  return 0;

}