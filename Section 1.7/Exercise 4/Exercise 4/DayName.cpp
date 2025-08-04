///Jordan Liu - Section 1.7 Exercise 4 - DayName() function that takes a number 1-7 and prints the day Sunday-Saturday

#include <stdio.h>

void DayName(int day_num);

///declaration of function

int main() {
	int day_num;
	printf("Enter a number from 1-7 for the day, with 1 being Sunday and 7 being Saturday: \n");
	scanf_s("%d", &day_num);
	DayName(day_num);
	return 0;
	///take number, assign it to day_num, run DayName(), return 0
}

void DayName(int day_num) {
	const char* week[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	///days of the week array ^
	printf("The day is %s\n", week[day_num - 1]);
}
