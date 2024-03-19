int main()
{
    long long int A;
    double B;
    scanf("%lld %lf", &A, &B);

    long long int result;
    B = (B + 0.005) * 100 ;
    result = (long long int) (A * (long long int) B);
    result = result / 100 ;
    printf("%lld\n",result);
}
