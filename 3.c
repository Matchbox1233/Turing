#include <stdio.h>

    int main()
    {
        int a=3, b=2;

        printf("Eredeti: %i %i\n",a,b);

        a=a+b;
        b=a-b;
        a=a-b;

        printf("Csere: %i %i\n",a,b);

        return 0;
    }