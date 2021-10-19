#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main (){
	int i, n = 0;
	int item;
	char x[10] [12];
	char temp[12];
	printf("Enter each string on a separate line \n\n");
	printf("Type 'END' when over \n\n");
	/* read in list of strings */
	do 
	{
		printf("String %d : ", n+1);
		scanf("%s", x[n]);
		} while (strcmp (x[n++], "END"));
		/* reoder the list of strings */
		n = n - 1;
		for(item=0; item<n-1; ++item)
		{
		/*find lowest of remaining strings */
		fof(i=item+1; i<n ; ++i)
		{
			if(strcmp (x[item], x[i]) > 0)
			{
				/* interchange two stings */
				strcpy(temp , x[item]);
				strcpy(x[item] , x[i]);
				strcpy(x[i] , temp);
			}
		}
	}
	/*Display the aranged list of strings */
	printf("Recorded list of strings : \n");
	for(i = 0 ; i < n ; ++i)
	{
		printf("\n String %d is %s", i+1,x[i]);
			
	return 0;
}
