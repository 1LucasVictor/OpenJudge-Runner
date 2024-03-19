/*#include <stdio.h>
  int main(){
    int a,b,c,d,n,sum=0;
      while(scanf("%d",&n) != EOF){
       for(a=0;a<10;a++){
          for(b=0;b<10;b++){
             for(c=0;c<10;c++){
                for(d=0;d<10;d++){
                    if(a+b+c+d==n)
                        sum++;
                          }
                            }
                             }
                               }
                                printf("%d\n",sum);
                                 sum=0;
                                   }
return 0;
}*/#include <stdio.h>
  int main(){
   int i,j,n,hantei=0;
   int sum=0;
    while(scanf("%d",&n) != EOF){
    for(i=2;i<=n;i++){
      for(j=2;j*j<=i;j++){
        if(i%j != 0 || i == j){
            hantei += 0;
               }else{
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
           