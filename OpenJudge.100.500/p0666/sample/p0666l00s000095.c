 #include <stdio.h>
    int  main(void) {
        int a,b,x;
        scanf("%d %d %d",&x,&a,&b);
        if(a>=b){
            printf("delicious" );
        }else if(b-a<=x && a<=b){
            printf("safe");
        }else{
            printf("dangerous");
        }
        return 0;
    }