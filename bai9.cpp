#include <stdio.h>  

int main() {  
    int choice;  
    float num1, num2, num3;  

    while (1) { 
        printf("\n\tMENU\n");  
        printf("1. Nhap 3 so\n");  
        printf("2. Tong 3 so\n");  
        printf("3. Trung binh cong 3 so\n");  
        printf("4. So nho nhat\n");  
        printf("5. So lon nhat\n");  
        printf("6. Thoat\n");  
        printf("Lua chon cua ban: ");  
        scanf("%d", &choice);  
        
        switch (choice) {  
            case 1:  
                printf("Nhap 3 so: ");  
                scanf("%f %f %f", &num1, &num2, &num3);  
                break;  
            case 2:  
                printf("Tong 3 so: %.0f\n", num1 + num2 + num3);  
                break;  
            case 3:  
                printf("Trung binh cong 3 so: %.0f\n", (num1 + num2 + num3) / 3);  
                break;  
            case 4:  
                {  
                    float min = num1; 
                    if (num2 < min) min = num2;
                    if (num3 < min) min = num3; 
                    printf("So nho nhat: %.0f\n", min);  
                }  
                break;  
            case 5:  
                {  
                    float max = num1;
                    if (num2 > max) max = num2;
                    if (num3 > max) max = num3;
                    printf("So lon nhat: %.0f\n", max);  
                }  
                break;  
            case 6:  
                printf("Thoat\n");  
                return 0;
            default:  
                printf("khong hop le\n");  
        }  
    }  

    return 0;
}