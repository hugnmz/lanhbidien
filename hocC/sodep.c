// số đẹp là số đòng thời vừa chia hết cho một snt và chia hết cho bình phương của snt đó
#include <stdio.h>
#include <math.h>

int solve(int n){
    for(int i =2;i<=sqrt(n);i++){
        int res =0;
        while(n%i==0){
            ++res;
            n/=i;
        }
        if(res >=2) return 1;
        
    }
    return 0;
}
int sodep(int n){
    int ok=0;
    for(int i=2;i<=sqrt(n);i++){
        int cnt=0;
        while(n%2 ==0){
            ++cnt;
            n/=i;
        }
        if(cnt >=2) ok =1;
        if(cnt==1) return 0;
    }
    if(n!=1){
        return 0;
    return ok;
    }
}
int main(){
    int a,b;
    scanf("%d",&a,&b);
    for(int i =a;i<=b;i++){
        if(sodep(i)) 
            printf("%d ",i);   
    }
}