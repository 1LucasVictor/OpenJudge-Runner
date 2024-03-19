int main()
{
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x);
    if (a > x || x > a+b) {
    printf("NO");
    } else {
    printf("YES");
    }
    return 0;
}