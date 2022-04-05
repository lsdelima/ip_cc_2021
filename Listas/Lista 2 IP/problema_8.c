 #include <stdio.h>

int main(int argc, char **argv)
{
	int x, y;
	
	scanf("%d", &x);
	
	if(x <= 1){
		y = x;
	}if(x == 1){
		y = 0;
	}if(x > 1){
		y = x * x;
	}
	
	printf("Y = %d\n", y);
	
	return 0;
}

