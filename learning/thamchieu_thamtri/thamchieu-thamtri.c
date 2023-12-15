#include <stdio.h>
void giam1donvi(int *var )
{
    *var= *var-1;
    // var : địa chỉ truyền vào
    // *var: giá trị của vùng địa chỉ truyền vào
}

void main(){
    int x=100;
    printf("truoc: %d\n",x);
    giam1donvi(&x);
    printf("sau: %d",x);
}
