#include <stdio.h>
#include<math.h>
// bước 1 nhập vào 3 sô a,b,c
// bước 2 kiêm tra nếu a == 0 phương trinh vô nghiệm
// bước 3 kiêm tính delta nếu delta < 0 phương trình vô nghiệm
int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    if (a == 0) 
    {
        printf("phuong trinh vo nghie\n");
    } else 
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf ("phương trinh vo nghiem");
        }
        if (delta > 0)
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("phuong trinh co hay nghiem phan biet: x1 = %.2lf, x2 = %.2lf", x1, x2);
        }else if (delta == 0)
        {
            x1 = -b/(2*a);
            printf("phuong trinh có nghiem kép: x1=x2=%.2f",x1);
        }
    }
    return 0;  
}
