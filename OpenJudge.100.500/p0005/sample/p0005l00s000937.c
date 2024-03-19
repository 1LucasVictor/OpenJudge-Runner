main(i){
    char s[21]="";
    scanf("%s",s);
    i=strlen(s);
    for(;i--;printf("%c",s[i]));
    puts("");
}