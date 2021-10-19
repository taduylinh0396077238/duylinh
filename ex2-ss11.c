#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary[10];
	int i, total , high;
	for(i=0; i<10; i++){
		printf("\n Enter value : %d :", i+1);
		scanf("%d",&ary[i]);
		}
		/* Displays highest of the entered values*/
		high = ary[0];
		for(i=1; i<10; i++){
			if(ary[i] > high)
			high = ary[i];
		}
		printf("\n Highest value entered was %d",high);
		/* prints average of value entered for ary[10] */
		for(i=0, total=0; i<10; i++)
		total = total + ary[i];
		printf("\n The average of the elemants of ary is %d", total/i);	
	return 0;
}
