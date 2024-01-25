#include <stdio.h>

/*int main(){
    int n;
    scanf("%d", &n);
    for(int i =1;i <=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                printf(" ");
            }
            else{
                printf("*");
            }
       
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1|| i==j){
              printf("*");
            }
            else{
                printf(" ");
            }
        
    }
     printf("\n");

    }
}
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(int i =0; i<n/2;i++){
        for(int j =0; j<n;j++){
            if((i+j == n/2) || (j-i==n/2)||(i+j ==( n/2)*3) || (i-j ==n/2)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i =n/2;i<n;i++){
        for(int j =0; j<n*2;j++){
            if((i+j == n/2) || (j-i == n/2) || (i+j ==(n/2)*3)||(i-j == n/2)){
                printf("*");

            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

    void lanhbidien(int m, int n){
        printf("lanh bi din");
        int i, j;
        
        for(int i =1;i< 7;i++){
            for(int j =1; j<=7;j++){
                if( !((i ==1 && (j ==1 || j==4 || j ==7 )|| (i ==4 && (j ==1 || j ==7 ))|| (i == 5 && (j <=2 || j>=6)) || (i==6 && (j <=3 || j>=5))))){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            
            }
            printf("\n");
        }
    }

int main(){
    int m =6, n=7;
    lanhbidien(m,n);
    return 0;
}
