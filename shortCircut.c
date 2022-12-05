// C program to illustrate the concept
// of short circuiting
#include <stdio.h>

// Driver Code
int main()
{
	int x = 1;
	int y = -1;

	// Since x == 50 evaluates to false, the second sub-expression is
	// also evaluated, value of y is incremented to 0 (false in boolean).
	// As a result else block is executed and the incremented value of y is
	// printed from within the else block
	if (x == 50 || ++y) {
		printf("if block executed\n");
		printf("Value of y: %d", y);
	}
	else {
		printf("else block executed\n");
		printf("Value of y: %d", y);
	}
	return 0;
}

