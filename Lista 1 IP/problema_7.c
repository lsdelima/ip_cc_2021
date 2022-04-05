#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float h, a, ab, v, y, z; y = 1; z =3;
	
	scanf("%f \n %f", &h, &a);
	
	ab = (3*(a*a)*sqrt(3))/2;
	
	v = (y/z) * ab * h;
	
	printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", v);
	
	return 0;
}

