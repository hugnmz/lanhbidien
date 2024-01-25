#include <bits/stdc++.h>

using namespace std;

int prime[1000001];

int sang(){
    for(int i =0;i<=1000000;i++)
    prime[i]=1;
    prime[1]=prime[0]=0;
    for(int i =2;i<=1000;i++){
        if(prime[i]){
            for(int j=i*i;j<=1000000;j+=i){
            prime[j]=0;
            }
        }
    }
}
int main(){
    sang();
    int t;
    cin >> t;
    
    while(t--){
        int a,b;
        int cnt =0;
        for(int i= a;i<=b;i++){
            if(prime[i])
             ++cnt;
             
        }
        cout << cnt << endl;
    }
    return 0;
}