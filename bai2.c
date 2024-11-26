#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int chan = 0, le = 0;

    // Nhập dữ liệu và kiểm tra tính hợp lệ
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

    int nums[] = {num1, num2, num3, num4, num5}; 
    for (int i = 0; i < 5; i++) {
        if (nums[i] % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    }

    // Hiển thị kết quả
    printf("So luong so chan: %d\n", chan);
    printf("So luong so le: %d\n", le);

    return 0;
}