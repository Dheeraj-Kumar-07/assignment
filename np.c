#include<stdio.h>
int main()
{
    int n=120;
    int *np;
    np=&n;
    printf("value = %d address = %d address = %p\n",n,&n,&n);
    n = 300;
    *np = 500
    printf("value = %d address = %d address = %p\n"n,np,np);
    return 0;
}