int main()
{
    long long int A;
    double B;
    scanf("%lld %lf", &A, &B);

    long long int result;
    result = (long long int) ((double) A * B);

    printf("%lld\n",result);
}
