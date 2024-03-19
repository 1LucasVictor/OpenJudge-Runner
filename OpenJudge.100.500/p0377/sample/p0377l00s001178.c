N,t,i,j,a[50][20];
main(){
    char c[2]="",s[4]="SHCD";
    for(scanf("%d",&N);N--;){
        scanf("%s%d",c,&t);
        switch(c[0]){
            case'S':a[0][t-1]=1;break;
            case'H':a[1][t-1]=1;break;
            case'C':a[2][t-1]=1;break;
            case'D':a[3][t-1]=1;break;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(a[i][j]==0)
            printf("%c %d\n",s[i],j+1);
        }
    }
}