#include<stdio.h>
int main(){
    int matkhau = 1234;
    int pass;
    while (1)
    {
        printf("hay nhap mat khau: ");
        scanf("%d",&pass);
        if (pass == matkhau)
        {
            printf("dung roi");
            break;
        }else
        {
            printf("sai roi\n"); 
        }
        
        
    }
    
    return 0;
}