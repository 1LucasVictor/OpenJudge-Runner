#include<stdio.h>
#include<math.h>
int max;
int check(int x, int y)
{
    static int count=0;
    double calc, mul;
    mul=(x*x)+(y*y);
    calc=sqrt(mul);
    if(calc<=(double)max){
        count++;
    }
    return count;
}
int main()
{
    int n, i, j, c;
    scanf("%d%d", &n, &max);
    int arr[n][2];
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<n; i++){
        c=check(arr[i][0], arr[i][1]);
    }
    printf("%d\n", c);
    return 0;
}