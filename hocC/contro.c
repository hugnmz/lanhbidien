#include <stdio.h>
#include <stdlib.h>
//&a[i] = a +i
//a[i] = *(a+i)
void tang1(int a){
    a +=100;
}
void tang2(int *a){
    *a +=100;
}
void swap(int *a, int *b){
    int temp = *a;
    *a =*b;
    *b =temp;
}
/*int main(){
    
    int a=300;
    int *ptr; // khai báo con trỏ kiểu int
    ptr = &a; //khởi tạo giá trị cho con trỏ
    printf("dia chi cua bien a : %d\n", &a);
    printf("Gia tri cua con tro ptr : %d\n", ptr);
    //toán tử dải tham chiếu
    printf("gia tri cua bien a %d\n", a);
    printf("Gia tri cua bien ma con tro ptr qly : %d\n", *ptr);
    tang1(a);
    tang2(&a);
    printf("gia tri cua ham tang2 la: %d", a);
    int x =1000, y=10000;
    swap(&x,&y);
    printf("%d %d", x, y);
    return 0;
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n", a); // a là hằng con trỏ
    printf("Dia chi cua a[0] : %d\n", &a[0]);
    for(int i =0; i< 10;i++){
        printf("dia chi cua ptu a : %d\n", &a[i]);
    }
    int *b =a;
    for(int i =0; i<10; i++){
        printf("gia tri cua mang a la: %d\n", b[i]);
    }
    return 0;
}
int main(){
    int a[5];
    for(int i =0; i< 5;i++){
        scanf("%d", a +i); // &a[i] = a +i
    }
    for(int i =0 ;i<5; i++){
        printf("%d ", *(a+i));
    }
}*/
int main(){

    //datatype *pointerName = (type_cast*) malloc(size_of_byte);
    // mảng có 1tr ptu
    int *ptr =(int*)malloc(99999999999999999 * sizeof(int ));
    if(ptr == NULL){
        printf("memory not allocated!");
    }
    free(ptr); // giải phóng bộ nhớ vừa xin cấp phát.
    //calloc
}