#include <stdio.h>

int print (int x[][4])
{
    //int a=0, b=0;
    int i=0;
    while (i<3)
    {
        int ii=0;
        while (ii<4)
        {
            printf ("%d, ", x[i][ii]);
            ii++;
        }
        printf ("\n");
        i++;
    }
    i=0;
    while (i<3)
    {
        int ii=0;
        while (ii<4)
        {
            printf ("%p, ", &x[i][ii]);
            ii++;
        }
        printf ("\n");
        i++;
    }
    return 0;
}

main ()
{

    int array[3][4]={{0,1,2},{3,4,5},6,7,8,9};
    print (array);

    int PP[3][4];
    int i=0, ii=0;
    for (i=0; i<3; i++)
    {
        for (ii=0; ii<4; ii++)
        {
            PP[i][ii] = array[i][ii];
        }
    }
    print (PP);
    return 0;
}
