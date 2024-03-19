main()
{
    char S[100001],tmp[100001];
    int i=0, ans=0, l, j=0, k=0;
    scanf("%s", S);
    
    l=strlen(S);
    for(i=0;i<l;i++)
    {
        if(S[i]=='0')j++;
        if(S[i]=='1')k++;
    }
    
    printf("%d",j+k>=2?l-abs(j-k):0);
}
