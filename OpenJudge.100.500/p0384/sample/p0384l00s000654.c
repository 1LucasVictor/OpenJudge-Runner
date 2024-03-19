int main(void)
{
    char st[1200];
    int c = 0,i;
    
    while(1){
        scanf("%c",&st[c]);
        if(st[c] == '\n')break;
        if((int)st[c] >= 97&&(int)st[c] <= 122)st[c] = (int)st[c] - 32;
        else
        if((int)st[c] >= 65&&(int)st[c] <= 90)st[c] = (int)st[c] + 32;
        c++;
    }
    
    for(i = 0;i < c;i++){
        printf("%c",st[i]);
    }
    printf("\n");
    return 0;
}