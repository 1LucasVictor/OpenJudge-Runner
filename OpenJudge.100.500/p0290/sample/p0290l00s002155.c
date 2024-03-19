  #include <stdio.h>
    #include <math.h>

    int main(){
    int num[10000], i, kosuu, x=0;
    int M=0;

    scanf("%d", &kosuu);
    for(i=0; i<kosuu; i++){
      scanf("%d", &num[i]);
    }

    for(i=0; i<kosuu; i++){

    //  printf("$");
      if(num[i]==2){
        M++;
        continue;
      }
    if(num[i]<2||num[i]%2==0){
      continue;
    }
    x = 3;
/*    while(x<=sqrt(num[i])){
      if(num[i]%x==0){
        continue;
      }*/
    //  printf("#");
      x+=2;
      M++;
    }
    printf("%d\n", M);
  return 0;
}