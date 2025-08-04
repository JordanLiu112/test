///Jordan Liu - Section 1.7 Exercise 1 - swap function with pointers

#include <stdio.h>

///This swap function takes pointers (int* a, b) so we can modify the original variables (i, j) by dereferencing
void Swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int main() {
	int i, j;
	printf("This program will swap the values for i and j. Input values for i and j: \n");
	scanf_s("%d", &i);
	scanf_s("%d", &j);
	printf("Before swap, i = %d and j = %d\n", i, j);
	Swap(&i, &j); ///pass addresses of i and j to Swap()
	printf("After swap, i = %d and j = %d\n", i, j);
	return 0;
}