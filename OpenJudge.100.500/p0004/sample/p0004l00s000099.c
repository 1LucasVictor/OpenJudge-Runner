#include <stdio.h>
 
int main(void) {
        long int na=0;
    long int nb=0;
    long int i;
    long int temp;
    while(scanf("%ld %ld",&na,&nb)!=EOF){
        temp=1;
        for(i=1;i<(na/2)&&i<(nb/2);i++){
            if(na%i==0&&nb%i==0){
                temp*=i;
                na/=i;
                nb/=i;
            }
        }
        printf("%ld %ld\n",temp,temp*na*nb);
    }
    
        return 0;
}