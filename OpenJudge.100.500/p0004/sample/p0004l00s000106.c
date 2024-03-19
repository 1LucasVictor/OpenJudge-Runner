#include<stdio.h>
int main(){
        int a,b,gcd,lcm,x,ch,y;
        int i,j,k;
        while(scanf("%d",&a) != EOF){
                scanf("%d",&b);
                if(a<b){
                        ch=a;
                        a=b;
                        b=ch;
                }
                for(i=1;i<50000;i++){
                        if(a*i%b==0){
                                lcm=a*i;
                                break;
                        }
                }
                for(j=0;j<50000;j++){
                        y=a%b;
                        if(y==0){
                                gcd=b;
                                break;
                        }
                        a=b;
                        b=y;
                }
                printf("%d %d\n",gcd,lcm);
        }
        return 0;
}