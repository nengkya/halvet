#include<stdio.h>
#include<stdlib.h>


int main(){

	system("clear");

	int array[50], n, i, j, temp;

	printf("Enter number of elements : ");

	scanf("%d", &n);

	printf("\nEnter %d integers : \n", n);


	for(i = 0; i < n; i++) {

		printf("\nEnter %d integer : ", i+1);

		scanf("%d", &array[i]);

	}


	for (i = 0; i < (n - 1); i++) {

		for (j= 0; j < n - i - 1; j++) {

			if (array[j] < array[j+1]) {
					temp = array[j];
					array[j]   = array[j+1];
					array[j+1] = temp;
			}

		}

	}


	printf("\nSorted list in descending order : ");

	for (i = 0 ; i < n ; i++)
		printf(" %d ", array[i]);

	printf("\n\n");

}
