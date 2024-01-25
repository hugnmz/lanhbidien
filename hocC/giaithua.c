#include <math.h>
#include <stdio.h>

void giaithua(){
    int n;
    scanf("%d",&n);
    int res =1;
    for(int i =1;i<=n;i++){
       res=res *i;
       
    }
    printf("%d",res);
}
int main(){
    int n;
    
    giaithua(n);
}