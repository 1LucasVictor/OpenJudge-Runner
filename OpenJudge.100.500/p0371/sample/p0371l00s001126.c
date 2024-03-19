    #include <stdio.h>
    
    int main(void){
        int n, a ,max = -1000000 ,min = 1000000;
        long long int sum = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            if(max < a){max = a;}
            if(min > a){min = a;}
            sum = sum + a;
        }
        printf("%d %d %lld\n",min,max,sum);

        return 0;
    }
