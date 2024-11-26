#include<stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int tong = 0;
    do {
        printf("Hay nhap 5 so nguyen (tat ca deu phai lon hon 0):\n");
        printf("Hay nhap so nguyen 1: ");
        scanf("%d", &num1);
        printf("Hay nhap so nguyen 2: ");
        scanf("%d", &num2);
        printf("Hay nhap so nguyen 3: ");
        scanf("%d", &num3);
        printf("Hay nhap so nguyen 4: ");
        scanf("%d", &num4);
        printf("Hay nhap so nguyen 5: ");
        scanf("%d", &num5);
    } while (num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0 || num5 <= 0);


    if (num1 % 2 != 0)
     {
        tong += num1;
     }
    if (num2 % 2 != 0) 
    {
        tong += num2;
    }
    if (num3 % 2 != 0) 
    {
        tong += num3;
    }
    if (num4 % 2 != 0) 
    {
        tong += num4;
    }
    if (num5 % 2 != 0) 
    {
        tong += num5;
    }

  
    printf("Tong cua cac so le la: %d\n", tong);

    return 0;
}
