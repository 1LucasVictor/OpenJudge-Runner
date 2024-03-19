main()
{
    int A, B, K, ans=0, k=0, i=0;
    scanf("%d%d%d", &A, &B, &K);
    i = (A>B?A:B)+1;
    do{
        i--;
        if(A%i==0 && B%i==0) k++;
    }while(k<K);
    printf("%d",i);
}
