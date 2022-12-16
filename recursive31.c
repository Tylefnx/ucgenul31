#include <stdio.h>

void ucgenul31()
{
    static int a = 0;
    if (!(a % 2))
    {

        printf("31 31 31\t31\t\t");
        printf("31 31 31\t31\t\t");
        printf("31 31 31\t31\t\t");
        printf("31 31 31\t31\n");
    }
    else if (a == 1)
    {
        printf("      31     31 31\t\t");
        printf("      31     31 31\t\t");
        printf("      31     31 31\t\t");
        printf("      31     31 31\n");
    }
    else
    {
        printf("      31\t31\t\t");
        printf("      31\t31\t\t");
        printf("      31\t31\t\t");
        printf("      31\t31\n");
    }
    
    if (a < 4)
    {
        ++a;
        return ucgenul31();
    }
    else {
        a = 0;
        printf("\n\n");
        return ucgenul31();
    }
}

void main()
{
    ucgenul31();
    exit(0);
}