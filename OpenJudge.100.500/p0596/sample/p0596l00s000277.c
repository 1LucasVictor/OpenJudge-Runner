main()
{
    char S[100001],tmp[100001];
    int i=0, ans=0, c, l;
    scanf("%s", S);
    
    do{
        c=0;
        l=strlen(S);
        for(i=0;i<l;i++)
        {
            if((S[i]=='0' && S[i+1]=='1') || (S[i]=='1' && S[i+1]=='0'))
            {
                S[i]=S[i+1]='\0';
                strcpy(tmp, &S[0]);
                strcat(tmp, &S[i+2]);
                strcpy(S,tmp);
                ans+=2;
                c=1;
                break;
            }
        }
    }while(c);
    printf("%d",ans);
}
