#include <stdio.h>  

int main() {  
    int num1 = 10;
    int num2; 

  
    do {  
        printf("Nhap vao mot so: ", num1);  
        scanf("%d", &num2);
    } while ( != num1);

    printf("Ban da nhap dung. ket thuc.\n");  
    return 0;  
}