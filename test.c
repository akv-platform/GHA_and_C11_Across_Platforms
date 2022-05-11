#include <stdio.h>
#include <math.h>

int main(void)
{
	float x = 2.25;
	
	// Should print 2.2 on -std=c11
	printf("2.25 (2.2) %.1f\n", x);
	
	// Should print 2.2 on -std=c11
	printf("2.25 (2.2) %.1f\n", 2.25);
	
	// Should print 4
	printf("4 %d\n", sizeof(float));
	
	// Should print 2 on -std=c11
	printf("2.5 (2) %.0f\n", 2.5);
	
	// Should print 3
	printf("2.5(3) %.0f\n", round(2.5));
	
	return 0;
}
