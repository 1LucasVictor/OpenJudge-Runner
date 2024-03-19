int main()
{
    int A[3];
    int n5=0,n7=0;
    scanf("%d%d%d",&A[0],&A[1],&A[2]);
    for(int i=0;i<3;i++)
    {
        if(A[i]==5)n5++;
        if(A[i]==7)n7++;
    }
    if(n5==2&&n7==1)printf("YES");
    else printf("NO");
    return 0;
}
