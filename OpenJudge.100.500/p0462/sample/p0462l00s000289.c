int main()
{
    long long int A;
    double B;
    scanf("%lld %lf", &A, &B);

    long long int result;
    B = B * 100;
    result = (long long int) (A * B);
    result = result / 100 ;
    printf("%lld\n",result);
}
