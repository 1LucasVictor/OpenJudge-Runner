int main(){
    int a,b,c;
    int l,m,n;
    scanf ("%d%d%d",&a,&b,&c);
    if ( a > b)
    {
        l = a;
        a = b;
        b = l;
    }
    if ( b > c)
    {
        m = b;
        b = c;
        c = m;
    }
    if ( a > b)
    {
        n = a;
        a = b;
        b = n;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
