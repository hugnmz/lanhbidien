#include <stdio.h>
/*xác định cáo bao nhiêu hàng
 xác định có bao nhiêu cột
 Kí tự, chữ số nó in ra là cái gì
 */
int main(){
    int n,m;
    scanf("%d", &n, &m);
    for(int i =1;i<=n;i++){ //lap n dong
        //xay dung ki tu cho dong thu i
        for(int j=1; j<=m;j++){
            if(i ==1 || i == n || j==1 || j==m)
              printf("*");
            else{
                printf(" ");
            }
        } 
        printf("\n");
    }
}