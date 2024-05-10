#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   
	float purchase_amount, actual_payment;

	
	scanf("%f", &purchase_amount);

	if (purchase_amount <= 500) {
		actual_payment = purchase_amount;
	}
	else if (purchase_amount <= 1000) {
		actual_payment = purchase_amount * 0.9;
	}
	else {
		actual_payment = purchase_amount * 0.8;
	}

	printf("%.2f\n", actual_payment);



	return 0;
}



