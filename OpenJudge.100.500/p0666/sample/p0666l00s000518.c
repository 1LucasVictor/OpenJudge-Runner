    #include<stdio.h>
    int main()
    {
        int X,A,B;
        scanf("%d %d %d",&X,&A,&B);
        if (B-A <= 0) printf("delicious\n");
        if (1 <= B-A && B-A <= X) printf("safe\n");
        if (X+1 <= B-A) printf("dangerous\n");
        return 0;
    }