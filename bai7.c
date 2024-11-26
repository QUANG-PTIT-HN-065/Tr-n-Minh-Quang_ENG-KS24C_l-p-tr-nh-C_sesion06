#include<stdio.h>
int main(){
    int n;
    while (1)
    {
        printf("hay nhap mot so bat ky < lon hon 0>: ");
        scanf("%d",&n);
        if (n > 0)
        {
            break;
        }
    }
    printf("uoc cua %d la\n",n);
    for (int i = 1; i <= n; i++)
    {
        
        if (n % i == 0)
        {
            printf("%d\n",i);
        
        }
    
    }
    return 0;
}