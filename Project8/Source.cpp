#include<stdio.h> 
#include<math.h> 
#include<locale.h> 
#include <iostream>
#include <time.h>
int main()
{
	setlocale(LC_ALL, "");

	//task 11c
	/*int A[12] = { 0 };
	for (size_t i = 0; i < 12; i + 2)
	{
		A[i] = 1 + rand() % 100;
		printf("%d\n", A[i]);
	}
*/

	//task 11b
	/*int A[28] = { 0 };
	for (size_t i = 12; i < -1; i--)
	{
		A[i] = -100 + rand() % 200;
		printf("%d = %d\n", i, A[i]);
		if (A[i] < 100)
		{
			printf("%d\n", &A[i]);
		}

	}*/


	//task 11a
	/*int A[28] = { 0 };
	for (size_t i = 12; i < -1; i--)
	{
		A[i] = -100 + rand() % 200;
		printf("%d = %d\n", i, A[i]);
		if (A[i]>0)
		{
			printf("%d\n", &A[i]);
		}
		
	}*/
	
	


	//task 10
	/*int sum = 0;
	int A[28] = { 0 };
	for (size_t i = 12; i < -1; i--)
	{
		A[i] = 1 + rand() % 100;
		sum = sum + A[i];
	}
	if (sum>0)
	{
		printf("грузоподъемность не прeвышена\n"); 
	}
	else
	{
		printf("грузоподъемность  прeвышена\n");
	}
*/




	//task 9
	/*int sum = 0;
	int A[28] = { 0 };
	for (size_t i = 12; i < -1; i--)
	{
		A[i] = 100 + rand() % 1000;
		sum = sum + A[i];
	}
	printf("%d\n", sum/28);*/



	//task 8
	/*int A[10] = { 0 };
	int sum = 0;
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 100;
		printf("%d\n", A[i]);
		sum = sum + A[i];
	}
	printf("%d\n", sum);*/




	//task 12
	/*int A[10] = { 0 };
	for (size_t i = 0; i < 12; i+2)
	{
		A[i] = 1 + rand() % 100;
		printf("%d\n", A[i]);
	}
	for (size_t i = 1; i < 12; i + 2)
	{
		A[i] = 1 + rand() % 100;
		printf("%d\n", A[i]);
	}
*/

	//task 7c
	/*int A[12] = { 0 };
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 100;
		printf("%d\n", (A[i] / A[1]));
	}
*/

	//task 7b
	/*int A[12] = { 0 };
	int a = 0;
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 100;
		a = 0 + rand() % 10;
		printf("%d = %d\n\n", i, A[i]); 
		printf("%d\n\n", a);
		printf("%d\n\n", (A[i]- a ));
	}*/


	//task 7a
	/*int A[12] = { 0 };
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 100;
		printf("%d\n", (A[i] * 2));
	}*/


	//task 6b
	/*int c = 0;
	int A[12] = { 0 };
	for (size_t i = 12; i < -1; i--)
	{
		A[i] = 1 + rand() % 100;
		printf("%d = %d\n", i, A[i]);
	}
	
	printf("%d\n", (A[1 + rand() % 12] + A[1 + rand() % 12]) / 2);
	*/

	



	//task 6a
	
	/*int c = 0;
	int A[12] = { 0 };
	for (size_t i = 12; i < -1; i--)
	{
		A[i] = 1 + rand() % 100;
		c = sqrt(A[i]);
		printf("%d\n", c);


	}*/



	//task5
	/*int A[12] = { 0 };
	for (size_t i = 12; i < -1; i--)
	{
		A[i] = 1 + rand() % 100;
		printf("%d = %d\n", i, A[i]);
	}*/

	//task4
/*
	int A[12] = { 0 };
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 100;
		printf("", A[i]);
		printf("введите индекс");
		scanf_s("%d", &i);
		printf("%d = %d\n", i, A[i]);
	}
*/




	



	//task3
	/*int A[12] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 163 + rand() % 190;
	}
	*/


	//task2
	/*int A[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		printf("¬ведите значение массива: ");
		scanf_s("%d", &A[i]);
	}*/




	//task1
	/*int A[8] = { 0 };
	A[0] = 37;
	A[1] = 0;
	A[2] = 50;
	A[3] = 46;
	A[4] = 34;
	A[5] = 46;
	A[6] = 0;
	A[7] = 13;*/

	system("pause");
	
}