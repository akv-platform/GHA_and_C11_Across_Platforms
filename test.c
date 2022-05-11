#include <stdio.h>
#include <math.h>

int main(void)
{
	float x = 2.25;
	float y = 2.35;
	
	// Should print 2.2 on -std=c11
	printf("2.25 (2.2) %.1f\n", x);
	
	// Should print 2.2 on -std=c11
	printf("2.25 (2.2) %.1f\n", 2.25);
		
	// Should print 2.4 on -std=c11
	printf("2.35 (2.4) %.1f\n", y);
	
	// Should print 2.2 on -std=c11
	printf("2.35 (2.4) %.1f\n", 2.35);
	
	// Should print 4
	printf("4 %d\n", sizeof(float));
	
	// Should print 2 on -std=c11
	printf("2.5 (2) %.0f\n", 2.5);
	
	// Should print 3
	printf("2.5(3) %.0f\n", round(2.5));
		
	// Should print 4 on -std=c11
	printf("3.5 (4) %.0f\n", 3.5);
	
	// Should print 3
	printf("3.5 (4) %.0f\n", round(3.5));
	
	return 0;
}
