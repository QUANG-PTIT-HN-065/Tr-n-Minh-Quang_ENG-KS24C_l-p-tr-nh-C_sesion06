#include<stdio.h>
int main(){
    int nam,thang;
    while (1)
    {
        printf("hay nhap vao so nam <1000-2024>: ");
        scanf("%d",&nam);
        if (nam > 1000 && nam <= 2024)
        {
            break;
        }else
        {
            printf("nam ko hop le\n");
        }
    }
    while (1)
    {
        printf("hay nhap vao thang: ");
        scanf("%d",&thang);
        if (thang > 0 && thang <= 12)
        {
            break;
        }else
        {
            printf("thang ko hop le\n");
        }
    }
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("thang %d co 31 ngay",thang);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("thang %d co 30 ngay");
        break;
    default:
        if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
        {
            printf("thang %d co 29 ngay");
        }else
        {
            printf("thang %d co 28 ngay");
        }
        break;
    }
    
    return 0;
}