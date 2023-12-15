#include <stdio.h>
float giaiptbac1(float *a, float *b)        // giá trị tại vùng địa chỉ a
{
    printf("nhap a = "); scanf("%f", a);  // a là vùng địa chỉ truyền đc %f truyền vào
    printf("nhap b = "); scanf("%f", b);

    float result;
    if(*a==0)
    {
        if(*b==0)
            printf("PT vo so nghiem");
        else
            printf("PT vo nghiem");
    }
    else
        result = -(*b)/(*a);
    return result;
}

void main(){
    float KQ;
    float a, b;
    KQ = giaiptbac1(&a,&b);
    printf("KQ x = %f", KQ);
    }
