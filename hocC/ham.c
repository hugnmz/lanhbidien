#include <stdio.h>
#include <math.h>

void xin_chao(){
    printf("xin chao !\n");
    printf("hello\n");
}
int tong(int n){
    int sum = 0;
    for(int i =1; i<=n ;i++)
     sum +=i;
     return sum;
}
int max(int a, int b){
    if(a>b) return a;
    else return b;
}
double s(int n){
    double res = 0;
    for(int i =1; i <=n ;i++) res += (double) 1/i;
    return res;
}
void scp( int n){
 int can = sqrt(n);
 if(can * can == n) printf("yes\n");
 else printf("no\n");
}
int main(){
     int n =10;
    printf("%d\n", max(100, 200));
    double res = s(n);
    printf("%.2lf", res);
    scp(n);
    return 0;
}