#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <math.h>






void main()
{
	double PQ = 0, x1 = 100, x2 = 200, y1 = 100, y2 = 200;

	PQ = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	
	printf_s("%f", PQ);
	Sleep(50000);

	

		//int count = 1,  rand_average = 0;
		//unsigned __int64 rand_tmp = 0;
		//
		//srand(time(NULL));
		//while (1) 
		//{
		//	rand_tmp = rand_tmp + ((rand() % 1000) + 1400) / 2;
		//	rand_average = rand_tmp / count;

		//	



		//	printf_s("%d\n", rand_average);
		//	Sleep(10);
		//	count++;
		//}

}