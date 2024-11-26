#include <stdio.h>
int main() {
    int num,b,c;
    int a = 0;
   do
   {
     printf("Nhap vao mot so nguyen<lon hon 0>: ");
        scanf("%d", &num);
   } while (num < 0);
   c = num;
    for (int i = 2; i <= c; i++) 
    {
        b = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                b = 1;
                break;
            }
            
        }
        if (b == 0)
        {
            printf("%d\n",i);
            a += 1;
        }
        if (a == num)
        {
            break;
        }
        c += 1;
        
    }
    
    return 0;
}
