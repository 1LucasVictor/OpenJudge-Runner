int main()
{
    long long int A;
    double B;
    scanf("%lld %lf", &A, &B);

    long long int result;
    B = B * 1000 ;
    result = (long long int) (A * B);
    result = result / 1000 ;
    printf("%lld\n",result);
}
