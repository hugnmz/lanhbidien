#include <stdio.h>

//int : %d
//long long: %lld
//float :%l
//double: %lf
//char:%c
// ép kiểu:(float)a/b
//cbrt:căn bậc 3
int main(){
    double a=40.12302;
    char kitu='h';
    int b =100,c=200;
    int e,f;
    float thuong = (float)a/b; // 1.0*a/b
    int du = 1 % b;
    printf("Hello World\n");
    printf("%.1lf\n", a);
    printf("%c\n", kitu);
    printf("giá trị của b và c là :%d\n%d\n",b ,c);
    scanf("%d%d", &e,&f);
    printf("%d %d",e,f);
    printf("%lf", thuong);
    return 0;
}