#include <stdio.h>

int main(){
    int n, m;
    printf("Nhap gia tri cho n ,m");
    scanf("%d",&n, &m);
    int a[n][m];

    for(int i = 0; i <n; i++){
        for(int j =0 ;i <m; j++){
            printf("nhap gia tri cho phan tu o hang %d, cot %d", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i <n; i++){
        for(int j =0 ;i <m; j++){
            printf("%d", a[i][j]);
        }
        printf("%d\n");
    }
    long long b[2][3]= {{1,2,3},{4,5,6}};
    for(int i = 0;i <2;i++){
        for(int j =0; j<3;j++){
            printf("%lld",a[i][j]);
            printf("%d\n");
        }
    }
    return 0;
}