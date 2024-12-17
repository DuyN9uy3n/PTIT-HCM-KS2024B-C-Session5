#include <stdio.h>  

int main() {  
    double num1, num2;  
    int choice;  

    while (1) {
        printf("Nhap vao hai so: ");  
        scanf("%lf %lf", &num1, &num2);  

        printf("\n\tCALCULATOR\n");  
        printf("1. Tong 2 so\n");  
        printf("2. Hieu 2 so\n");  
        printf("3. Tich 2 so\n");  
        printf("4. Thuong 2 so\n");  
        printf("5. Thoat\n");  
        printf("Lua chon cua ban: ");  
        scanf("%d", &choice);  

        switch (choice) {  
            case 1:  
                printf("Tong: %.0lf\n",num1 + num2);  
                break;  
            case 2:  
                printf("Hieu: %.0lf\n",num1 - num2);  
                break;  
            case 3:  
                printf("Tich: %.0lf\n",num1 * num2);  
                break;  
            case 4:  
                if (num2 != 0) {  
                    printf("Thuong: %.0lf\n",num1 / num2);  
                } else {  
                    printf("Loi: Khong the chia cho 0!\n");  
                }  
                break;  
            case 5:  
                printf("Thoat");  
                return 0;  
            default:  
                printf("khong hop le");  
        }  

    }  

    return 0; 
}