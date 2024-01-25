#include <math.h>
#include <stdio.h>
// số sphenic là số được phân tích dưới dạng tích của 3 sô khác nhau.
int sphenic(int n){
    int res = 0; // đếm số lượng tsnt khác nhau của n.
    for(int i =2;i <=sqrt(n); i++){
        int cnt =0;
        while( n%i ==0){
            ++cnt;
            n/=i;
        }
        if( cnt >=2) return 0;
        if(cnt ==1) ++res;
    }
    if( n!=1 )
      ++res;
    return res ==3;
}
int main(){
   int t;
   scanf("%d", &t);
   for(int i=1;i<=t;i++){
   int n;
   scanf("%d", &n);
   printf("%d\n", sphenic(n));
   }
}