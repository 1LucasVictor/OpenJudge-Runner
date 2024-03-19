#include <stdio.h>
#include <math.h>


int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    int i, x[n];
    for(i = 0 ; i < n ; i++){
        x[i] = 10;
    }
    int xxx, s, c;
    xxx = 1;
    for(i = 0 ; i < m ; i++){
        scanf("%d %d", &s, &c);
        if(x[s-1] != 10 && x[s-1] != c){
            xxx = 0;
        }
        else{
            x[s-1] = c;
        }
    }
    if(n != 1 && x[0] == 0){
        xxx = 0;
    }
    if(xxx == 1){
        if(x[0] == 10){
            x[0] = 1;
        }
        for(i = 1 ; i < n ; i++){
            if(x[i] == 10){
                x[i] = 0;
            }
        }
        double aaa = 0.0;
        for(i = 0 ; i < n ; i++){
            aaa += (double)x[i] * pow(10, n - i - 1);
        }
        int xx = (int)aaa;
        printf("%d\n", xx);
    }
    else{
        printf("-1\n");
    }

    return 0;
}