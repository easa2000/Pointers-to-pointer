// pointers to pointers

#include<stdio.h>
main()
{
    int x = 20;
    int *pval,**ppval;
    pval = &x;
    ppval = &pval;

    printf("\n value of a : %d",x);
    printf("\n value of pval : %u",**ppval);
}
