int main(void){
    int Num = 0, point = 0;
    double Distance = 0;
    scanf("%d %lf",&Num,&Distance);

    double x = 0, y=0;
    double D;

    for(int i = 0; i < Num; i++){
        scanf("%lf %lf",&x,&y);
        D = sqrt(x*x + y*y);
        if(D <= Distance)
            point++;
    }

    printf("%d",point);

    return 0;
}