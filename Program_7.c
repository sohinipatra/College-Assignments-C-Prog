#include <stdio.h>

int main() 
{
    int n,l;
    printf("enter no");
    scanf("%d",&n);
    l=n-(10*(n/10));
    printf("the last digit is %d",l);
    
    return 0;
}