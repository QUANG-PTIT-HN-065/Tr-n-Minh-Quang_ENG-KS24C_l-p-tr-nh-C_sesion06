#include<stdio.h>
int main(){
    int num1, num2, num3, sum;
    for (int i = 100; i <= 999; i++)
    {
        num1 = i / 100;
        num2 = (i / 10) % 10;
        num3 = i % 10;
        sum = (num1 * num1 * num1) + (num2 * num2 * num2) + (num3 * num3 * num3);
        if (sum == i)
        {
             printf("%d\n",i);
        }
        
    }
    
    return 0;
}