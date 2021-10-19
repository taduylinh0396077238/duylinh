#include <stdio.h>
#include <stdlib.h>

struct strucintcal /* Defines the structure */ 
	{
			char name[20];
			int numb;
			float amt;
	}; 

	void main()
	{
		struct strucintcal xyz; /* Declares a variable */

		void intcal(struct strucintcal);
        /* Accepts data into the structure */
		printf("\nEnter Customer name: ");
		gets(xyz.name);

		printf("\nEnter Customer number: ");
		scanf("%d", &xyz.numb);

		printf("\nEnter Principal amount: ");
		scanf("%f", &xyz.amt);

		intcal(xyz); /* Passes the structure to a function */
		getch();
	}

	void intcal(struct strucintcal abc)
	{
	float si, rate = 5.5, yrs = 2.5;

		/* Computes the interest */
		si = (abc.amt * rate * yrs) / 100;

	printf ("\nThe customer name is %s", abc.name);
	printf("\nThe customer number is %d", abc.numb);
	printf("\nThe amount is %f", abc.amt);
	printf("\nThe interest is %f", si);

	return;
	}


