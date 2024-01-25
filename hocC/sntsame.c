#include <stdio.h>
#include <math.h>

int prime[1000001];
int sang(){
    for(int i =0;i <=1000000;i++){
        prime[i]=1;
        prime[1]=prime[0]=0;
        for(int i =2;i <=1000;i++){
            if(prime[i]){
                for(int j =0 ;j<=1000000;j+=i)
                   prime[j]= 0;
            }
        }
    }
}
int checkprime1(int n){
    while(n){
        int r =n%10;
        if(r !=2 && r !=3 && r!=5 && r!=7){
            return 0;
        n /=10;
        }
        return 1;
    }
}
int main(){
   int n;
   scanf("%d", &n);
   int cnt =0;
   int i =0;
   while(cnt <n){
    if(sang(i)){
        printf("%d", i);
        ++cnt;
    }
    ++i;
   }
}