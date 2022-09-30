//5.5 Guided P James Schmidt//
//Square, cube, and fourth root problem//

#include <stdio.h>
#include <math.h>


main()
{
	int num;
	double square, cube, fourth; /*Variables must float or double*/
	
	for( num = 10; num <= 25; num++)
		{	square = sqrt(num);
	   cube = pow(num, (1.0/3.0));
	   fourth = pow(num, (1.0/4.0));
	   printf(" %d %.2f %.2f %.2f \n",num, square, cube, fourth);
		}
}

