int main(void){
    int line,i,a,b,c;
    scanf("%d",&line);
    for (i=0;i<line;i++){
        scanf("%d %d %d",&a,&b,&c);
        (a*a)+(b*b)==(c*c) ? printf("YES\n"):printf("NO\n");
    }
}