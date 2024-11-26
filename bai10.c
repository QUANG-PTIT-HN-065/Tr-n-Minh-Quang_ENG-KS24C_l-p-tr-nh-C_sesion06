#include <stdio.h>

int main() {
    int num;
    int num1 = 1;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);
    if (num <= 1)
    {
      num1 = 0;
    }else if (num > 1)
    {
        for (int i = 2; i < num; i++) 
        {
            if (num % i == 0) 
            { 
                num1 = 0;
                break;
            }
        }
    }
    if (num1 == 0)
    {
        printf("%d khong phai la so nguyen to",num);
    }else
    {
        printf("%d la so nguyen to",num);
    }
    

    return 0;
}
