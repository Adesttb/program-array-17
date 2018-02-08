#include <stdio.h>
main()
{
    int x[3][5];
    int y,z;
    int hitung=0;
    
	for(y=0;y<3;y++)
    {
        printf("y = %d\n",y);
        for(z=0;z<5;z++)
        {
            hitung+=z;
            x[y][z] = hitung;
            printf("%\t%3d - %3d\n",z,x[y][z]);
        }
    }
    return 0;
}
