#include <math.h>
#include <stdio.h>

#define ll long long

ll gcd(ll a, ll b){
   while(b!=0){
    ll r =a%b;
    a =b;
    b =r;
   }
    return a;
}
ll lcm(ll a, ll b){
    return a/gcd(a,b)*b; // return a*b/gcd(a,b).
}
int main(){
    int a ,b;
    scanf("%d%d", &a, &b);
    printf("%d %d", gcd(a, b), lcm(a,b));
    return 0;
}