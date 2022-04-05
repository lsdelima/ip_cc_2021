#include <stdio.h>

int main(int argc, char **argv)
{
	float x, y, z, a;
	
	scanf("%f %f %f %f", &x, &y, &z, &a);
	
	if ((x <= y) && (x <= z) && (x <= a)){
		if((y <= z) && (y<= a)){
			if(z <= a){
				printf("%.2f, %.2f, %.2f, %.2f ", x, y, z, a);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", x, y, a, z);
			}
		}
		else if((z <= y) && (z <= a)){
			if(y <= a){
				printf("%.2f, %.2f, %.2f, %.2f ", x, z, y, a);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", x, z, a, y);
			}
		}
		else if((a <= y) && (a <= z)){
			if(y <= z){
				printf("%.2f, %.2f, %.2f, %.2f ", x, a, y, z);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", x, a, z, y);
			}
		}
	}

	else if ((y <= x) && (y <= z) && (y <= a)){
		if((x <= z) && (x <= a)){
			if(z <= a){
				printf("%.2f, %.2f, %.2f, %.2f ", y, x, z, a);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", y, x, a, z);
			}
		}
		else if((z <= x) && (z <= a)){
			if(x <= a){
				printf("%.2f, %.2f, %.2f, %.2f ", y, z, x, a);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", y, z, a, x);
			}
		}
		else if((a <= x) && (a <= z)){
			if(x <= z){
				printf("%.2f, %.2f, %.2f, %.2f ", y, a, x, z);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", y, a, z, x);
			}
		}
	}
	
	else if ((z <= y) && (z <= x) && (z <= a)){
		if((y <= x) && (y <= a)){
			if(x <= a){
				printf("%.2f, %.2f, %.2f, %.2f ", z, y, x, a);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", z, y, a, x);
			}
		}
		else if((x <= y) && (x <= z)){
			if(y <= a){
				printf("%.2f, %.2f, %.2f, %.2f ", z, x, y, a);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", z, x, a, y);
			}
		} 
		else if((a <= y) && (a <= x)){
			if(y <= x){
				printf("%.2f, %.2f, %.2f, %.2f ", z, a, y, x);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", z, a, x, y);
			}
		}
	}
	
	else if ((a <= y) && (a <= x) && (a <= z)){
		if ((x <= y) && (x <= z)){
			if(z <= y){
				printf("%.2f, %.2f, %.2f, %.2f ", a, x, z, y);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", a, x, y, z);
			}		
		}
		else if ((z <= y) && (z <= x)){
			if(y <= x){
				printf("%.2f, %.2f, %.2f, %.2f ", a, z, y, x);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", a, z, x, y);
			}	
		} 
		else if ((y <= z) && (y <= x)){
			if(z <= x){
				printf("%.2f, %.2f, %.2f, %.2f ", a, y, z, x);
			}else {
				printf("%.2f, %.2f, %.2f, %.2f ", a, y, x, z);
			}
		}
	}
	
	return 0;
}

