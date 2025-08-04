///Jordan Liu - Section 1.7 Exercise 3 - Predict what is printed on screen

/* Predict what will be printed on the screen */

#include <stdio.h> 

#define PRD(a) printf("%d", (a) )  // Print decimal 
#define NL  printf("\n");  // Print new line 

// Create and initialse array 
int a[] = { 0, 1, 2, 3, 4 };

int main()
{
	int i;
	int* p;

	for (i = 0; i <= 4; i++) PRD(a[i]);    // 1 
	NL;

	///This will print every decimal in the array from a[0] to a[4], i.e. '01234', then print a new line.

	for (p = &a[0]; p <= &a[4]; p++) PRD(*p);   // 2 
	NL;
	NL;

	///p points from a[0] to a[4], *p dereferences, and PRD(*p) prints '01234' then two nes lines. 
	
	for (p = &a[0], i = 0; i <= 4; i++) PRD(p[i]);  // 3 
	NL;

	///p points from a[0] to a[4], p[i] is the same as a[i], and PRD(p[i]) prints '01234' then a new line.

	for (p = a, i = 0; p + i <= a + 4; p++, i++) PRD(*(p + i)); // 4 
	NL;
	NL;

	///*(p+i) starts at a[0], then a[2], and finally a[4], which prints "024", then two new lines

	for (p = a + 4; p >= a; p--) PRD(*p);    // 5 
	NL;

	///p starts at a[4] and decrements to a[0], printing '43210' and then a new line.

	for (p = a + 4, i = 0; i <= 4; i++) PRD(p[-i]);   // 6 
	NL;

	///p[-i] accesses a[4] and decrements to a[0], printing '43210' and a new line.

	for (p = a + 4; p >= a; p--) PRD(a[p - a]);   // 7 
	NL;

	///a[p-a] starts at a[4] and decrements to a[0], printing '43210' and then a new line. 

	return 0;
}
