int main(void){
    int i = 0,h,a;
    scanf("%d%d",&h,&a);
    while(h > 0){
        h -= a;
        ++i;
    }
    printf("%d",i);
    
    return 0;
}