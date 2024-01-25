#include <math.h>
#include <stdio.h>

void ptsnt(int n){
    for(int i =2; i<=sqrt(n);i++){
        while(n%i==0){
            printf("%d", i);
            n /=i;
        }
    }
    if(n !=1){
        printf("%d ", n);
    }
}
int main(){
    int n;
    scanf("%d ", &n);
    ptsnt(n);
  
}