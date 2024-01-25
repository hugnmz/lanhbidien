#include <math.h>
#include <stdio.h>

int nt(int n){
    for(int i =2; i<= sqrt(n);i++){
        if(n%i ==0){
            return 0;
        }
    }
    return n> 1;
}
int csnt(int n){
    while(n){
        int r =n%10;
        if(r !=2 && r!=3 && r!=5 && r!= 7){
            return 0;
         n/=10;
        }
        return 1;
    }
}
int tongnt(int n){
     int sum =0;
     while(n){
        sum += n%10;
        n /=10;
     }
     return nt(sum);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d%d",&a,&b);
        int cnt =0;
        for(int i =a;i <=b;i++){
            if(csnt(i)&& nt(i) && tongnt(i)){
               ++cnt;
            }
            printf("%d",cnt);
        }
    }
}
