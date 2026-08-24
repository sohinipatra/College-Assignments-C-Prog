#include<stdio.h>
int main()
{
    float c, f;
    float fah, cel;

    printf("enter temp in celsius \n");
    scanf("%f",&c);
    fah = c * 9 / 5 + 32;
    printf("the value in fahrenheit is %f \n",fah);

    printf("enter temp in fahrenheit \n");
    scanf("%f",&f);
    cel = (f - 32) * 5 / 9;
    printf("the value in celsius %f",cel);

    return 0;
}