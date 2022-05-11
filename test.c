#include <stdio.h>
#include <math.h>

int main(void)
{
	float x = 2.25;
	float y = 2.35;
	
	// Should print 2.2 on -std=c11
	printf("fx 2.25 (2.2) %.1f\n", x);
	
	// Should print 2.2 on -std=c11
	printf("f  2.25 (2.2) %.1f\n", 2.25f);
		
	// Should print 2.4 on -std=c11
	printf("fy 2.35 (2.4) y %.1f\n", y);
	
	// Should print 2.2 on -std=c11
	printf("f 2.35 (2.4)   %.1f\n", 2.35f);
	
	// Should print 4
	printf("sizeof(float) 4 %d\n", sizeof(float));
	
	// Should print 2 on -std=c11
	printf("f 2.5 (2) %.0f\n", 2.5f);
	
	// Should print 3
	printf("round(2.5) (3) %.0f\n", round(2.5f));
		
	// Should print 4 on -std=c11
	printf("3.5 (4) %.0f\n", 3.5f);
	
	// Should print 3
	printf("round(3.5) (4) %.0f\n", round(3.5f));
	
	return 0;
}
