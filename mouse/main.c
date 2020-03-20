#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>






int main()
{

	POINT p;
	int* xy[2] = {0,0};

	int *buf[100];
	
	int k = 0;
	double StartTime = 0, StopTime = 0;
	int check = 0;
	

	while (1)
	{
		if (check == 1)
		{
			StartTime = clock();
			check = 0;
		}

		GetCursorPos(&p);
		if ((xy[0] != p.x) | (xy[1] != p.y))
		{
			StopTime = clock();
			check = 1;
			xy[0] = p.x;
			xy[1] = p.y;
			int hz;
			if ((StopTime - StartTime) == 0)
			{
				hz = 1000;
			}
			else
			{
				hz = (1000 / (StopTime - StartTime));
			}

			buf[k] = p.x;
			buf[++k] = p.y;
			printf("X = %d, Y= %d : %dHz\n", (int)xy[0], (int)xy[1], hz);

			k++;
			if (k > 100)
			{
				break;
			}
		}
	}

	for (int i = 0; i < 100; i += 2)
	{
		printf("Log : X = %d, Y= %d\n", (int)buf[i], (int)buf[i+1]);
	}

	return 0;
}