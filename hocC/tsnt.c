#include <math.h>
#include <stdio.h>


int prime[100001];

void sang(){
    for(int i =1;i <=100000; i++){
        prime[i] = i;
    }
    for(int i =2;i<=sqrt(100000);i++){
        if(prime[i]){
            for(int j =i*i;j<=100000;j+=i){
                if(prime[j] == j){
                    prime[j] ==i;
                }
            }
        }
    }
}
int main(){
    while(n!=1){
        int cnt =0;
        int tmp = prime[n];
        while(n % tmp ==0){
            ++cnt;
            n/tmp;
        }
        printf("%d(%d)", tmp ,cnt);
    }
    printf("\n");
}
int main(){
    sang();
    int t;
    scanf("%d", &t);
    for(int i =1;i<=t;i++){
        int n;
        scanf("%d", &n);
        printf("#TC%d", i);
    }
}