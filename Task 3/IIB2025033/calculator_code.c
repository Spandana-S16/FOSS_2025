#include <stdio.h>
int main() {
	int n1,n2,op;
	printf("Enter the first no.: ");
	scanf("%d",&n1);
	printf("Enter the second no.: ");
	scanf("%d",&n2);
	printf ("Enter the operation to be done (1 for +, 2 for -, 3 for *, 4 for /");
	scanf("%d",&op);
	if (op==1) {
		printf("The sum of %d and %d is %d",n1,n2,n1+n2);
	}
	else if (op==2) {
		if (n1>n2) {
			 printf("The difference between %d and %d is %d",n1,n2,n1-n2);
		}
		else {
			printf("The difference between %d and %d is %d",n2,n1,n2-n1);
		}
	}
	else if (op==3) {
		printf("The product between %d and %d is %d",n1,n2,n1*n2);
	}
	else {
		if (n2==0) {
			printf("Invalid divison with 0");
		}
		else {
			printf("The quotient of %d upon dividing with %d is %d",n1,n2,n1/n2);
		}
	}
	return 0;
}
