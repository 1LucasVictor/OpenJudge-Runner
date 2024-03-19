#include <stdio.h>
int main(void){
    // Your code here!
    int L,R;
    int i,j;
    int result1,result2,result3;
    int min;
    
    scanf("%d %d\n",&L,&R);
    min = 2020;
    for(i=L;R>=i;i++){
        for(j=i+1;R>=j;j++){
            result1 = i;
            result2 = j;
            result1 = result1%2019;
            result2 = result2%2019;
            result3 = (result1*result2)%2019;
            if(min>result3) min = result3;
        }
    }
    
    printf("%d\n",min);
    return 0;
}
