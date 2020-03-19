/*
Radu Enachi 


+int quotient(int);
+int reminder(int);

*/



#include <iostream>


int quotient(int x, int y);
int reminder(int x, int y);


int main() {

	int userInputX = 0, userInputY = 0;

	std::printf("Please chioce  the number for x and y: \n");
	scanf_s("%d %d", &userInputX, &userInputY );

	int theQuotient = quotient(userInputX, userInputY);


	std::printf("The quotirnt of the number x = %d and y = %d is %d \n", userInputX, userInputY, theQuotient);

	int theReminder = reminder(userInputX, userInputY);

	std::printf("The reminder of the number x = %d and y = %d is %d \n", userInputX, userInputY, theReminder);



	return 0;
}

int quotient(int x, int y) {
	int total = x / y;

	return total;
}

int reminder(int x, int y) {
	int total = x % y;

	return total;
}