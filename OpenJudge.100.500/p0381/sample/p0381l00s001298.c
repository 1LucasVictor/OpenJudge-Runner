#include <stdio.h>

int main (void)
{
  int i, s, t, n, x, count;
for(;;){

  scanf("%d %d", &n, &x);
  if(n ==0 && x ==0){break;}
count = 0;
for(i =1; i<= n; i++){

  for(t = i+1; t <= n; t++ ){

    for(s = t+1; s <= n; s++){
      if(i + s+ t == x){
  
        count += 1;
      }
    }
  }
}
printf("%d\n", count);

}


  return 0;
}