#include <stdio.h>
  int main(){
   int i,j,n,hantei=0;
   int sum=0;
    while(scanf("%d",&n) != EOF){
    for(i=2;i<=n;i++){
      for(j=2;j*j<=i;j++){
        if(i%j == 0 && i != j){
            hantei += 1;
               }
}
if(hantei == 0){
sum++;
}
hantei=0;
}
printf("%d\n",sum);
sum=0;
hantei = 0;
}
return 0;
}
           