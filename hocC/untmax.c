#include <math.h>
#include <stdio.h>

int solve(int n){
    int res =0;
    for(int i =2;i<=sqrt(n);i++){
    
            
            while(n%i==0){
                res =i;
                n/=i;
            }
        
        if(n!=1){
            res =n;
        return res;
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%d", solve(n));
    }
}