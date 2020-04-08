#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <math.h>

#define FILE_NAME "./\\tmp.csv"





void fileopen(FILE* file)
{

	if (file == NULL)
	{
		printf_s("file open fall \n");
		return 0;
	}
}


double filter_0(double xy)
{
	double y = pow(xy, 3);
	return y;
}

double B(double t, double p0, double p1) // xy µû·Î
{
	double b = (1 - t) * p0 + t * p1;
	return b;
}





int main()
{

	FILE* fp;


	double count = 0;
	int sxy[2] = { 10,20 };
	int exy[2] = { 30,40 };


	remove(FILE_NAME);

	while (1)
	{
		if (count <= 1)
		{
			double x, y;
			x = B(count, sxy[0], exy[0]);
			y = B(count, sxy[1], exy[1]);

			fopen_s(&fp, FILE_NAME, "a+");
			fileopen(fp);
			fprintf_s(fp, "%lf,%lf\n", x, y);
			printf_s("%lf,%lf\n", x, y);
			fclose(fp);

		}
		else
		{
			break;
		}
		count += 0.1;
	}
	return 0;
}