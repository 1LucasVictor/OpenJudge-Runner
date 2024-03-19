#include <stdio.h>

int main(){
    
    int L ,R ,i, j ;
    int isum ,jsum ,iminsum ,jminsum ,minsum;

    iminsum =2019;
    jminsum =2019;

    0 <= L <2000000000;
    0 <= R <2000000000;

    scanf("%d", &L);
    scanf("%d" ,&R);

    i=L;
    if(R-L>=2019){
        printf("%d\n",0);
        return 0;
    }
    else{

    
    for(j= i+1; j <= R ; j++){
        
        jsum = j%2019;

        if(jsum < jminsum){
            jminsum = jsum;
        }

        for(i = L;i <= j-1; i++){
            isum = i%2019;

            if(isum <iminsum){
                iminsum = isum;
            }

        }  
    }

    minsum = jminsum*iminsum%2019;

    printf("%d\n", minsum );
    return 0;
    }
}