#include<stdio.h>
#include<math.h>
int main()
{
    int a=20000;
    int num, i, b, flag = 0;
    for ( b = 2; b <= a; b++)
    {
        num = sqrt(b);
        for ( i = 2; i <= num; i++)
        {
            if (b % i == 0)
                break;
        }
        if (i > num)
        {
            printf("%d\t", b);
            flag++;
            if (flag % 5 == 0) {
                printf("\n");
            }
        }        
    }
    printf("\n");
    return 0;
}