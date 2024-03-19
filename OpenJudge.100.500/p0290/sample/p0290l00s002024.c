#include <math.h>
int prime(int val){
    if (val==2) return 1;
    if (val==3) return 1;
    int count = 0;
    for (int i = 2; i < sqrt(val) + 1; i++){
        if(val%i == 0){
            count++;
        }
    }
    if ( count > 0) return 0;
    else return 1;
}



int main(){
    
    int Num;
    scanf("%d",&Num);
    int a[10000+5]; 
    for(int i = 0; i < Num; i++){
        
        scanf("%d",&a[i]);
        
    }
    int count = 0;
    int total= 0;
    for(int i = 0; i < Num; i++){
        int isprime =prime(a[i]);
        if(isprime == 1)total++;
    }
    printf("%d\n",total);
    return 0;
}
