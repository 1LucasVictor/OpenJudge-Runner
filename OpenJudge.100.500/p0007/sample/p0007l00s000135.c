#include <stdio.h>

int per(int n){
    int a,b,c,d,cnt=0;
    for(a=0;a<=9;a++)
        for(b=0;b<=9;b++)
          for(c=0;c<=9;c++)
            for(d=0;d<=9;d++)
                 if((a+b+c+d)==n){
                        cnt++;

                 }
                 return cnt;


}
int main(){
    int n,p;
    while(scanf("%d",&n)==1){
    p = per(n);
    printf("%d\n",p);

    }
}