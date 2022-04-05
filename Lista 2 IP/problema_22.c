#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	
	float x, y, z;
	
	scanf("%d", &i);
	
	scanf("%f %f %f", &x, &y, &z);
	
	if (i == 1){
		if ((x <= y) && (x <= z)){
			if(y <= z){
				printf("%.2f %.2f %.2f", x, y, z);
			}else {
				printf("%.2f %.2f %.2f", x, z, y);
			}
		}
		
		else if ((y <= x) && (y <= z)){
			if(x <= z){
				printf("%.2f %.2f %.2f", y, x, z);
			}else {
				printf("%.2f %.2f %.2f", y, z, x);
			}
		}
		
		else if ((z <= x) && (z <= y)){
			if(x <= y){
				printf("%.2f %.2f %.2f", z, x, y);
			}else {
				printf("%.2f %.2f %.2f", z, y, x);
			}
		}
		
	} else if (i == 2){
		if ((x >= y) && (x >= z)){
			if(y >= z){
				printf("%.2f %.2f %.2f", x, y, z);
			}else {
				printf("%.2f %.2f %.2f", x, z, y);
			}
		}
		
		else if ((y >= x) && (y >= z)){
			if(x >= z){
				printf("%.2f %.2f %.2f", y, x, z);
			}else {
				printf("%.2f %.2f %.2f", y, z, x);
			}
		}
		
		else if ((z >= x) && (z >= y)){
			if(x >= y){
				printf("%.2f %.2f %.2f", z, x, y);
			}else {
				printf("%.2f %.2f %.2f", z, y, x);
			}
		}
		
	} else if(i == 3){
		if ((x >= y) && (x >= z)){
			if(y >= z){
				printf("%.2f %.2f %.2f", y, x, z);
			}else {
				printf("%.2f %.2f %.2f", z, x, y);
			}
		}
		
		else if ((y >= x) && (y >= z)){
			if(x >= z){
				printf("%.2f %.2f %.2f", x, y, z);
			}else {
				printf("%.2f %.2f %.2f", z, y, x);
			}
		}
		
		else if ((z >= x) && (z >= y)){
			if(x >= y){
				printf("%.2f %.2f %.2f", x, z, y);
			}else {
				printf("%.2f %.2f %.2f", y, z, x);
			}
		}
	}

	return 0;
}

