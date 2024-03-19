#include <stdio.h>
int main(void){
    // Your code here!
    long L,R;
    long i,j;
    long result1,result2,result3;
    long min;
    
    scanf("%ld %ld\n",&L,&R);
    min = 2020;
    for(i=L;R>=i;i++){
        for(j=i+1;R>=j;j++){
            result1 = i;
            result2 = j;
            result1 = result1%2019;
            result2 = result2%2019;
            result3 = (result1*result2)%2019;
            if(min>result3) min = result3;
            if(min==0){
                j=R; i=R;
            }
        }
    }
    
    printf("%ld\n",min);
    return 0;
}
