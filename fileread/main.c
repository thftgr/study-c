#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <math.h>

#define FILE_NAME "../../../\\mouse\\x64\\Release\\tmp.csv"


void fileopen(FILE* file)
{

	if (file == NULL)
	{
		printf_s("file open fall \n");
		return 0;
	}
}



void main()
{
	FILE* fp;

	int rb[3] = { 0,0,0 };
	int rb_tmp[2] = { 0,0 };
	int count = 0;



	

	
	fopen_s(&fp, FILE_NAME, "a+");
	fileopen(fp);
	printf_s("wait 5sec\n");
	Sleep(5000);

	while (1)
	{

		fscanf_s(fp, "%d,%d,%d", &rb[0], &rb[1], &rb[2]);



		
		if (rb[0] == rb_tmp[0] && rb[1] == rb_tmp[1])
		{
			break;
		}
		else
		{
			//mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, GetMessageExtraInfo());
			rb_tmp[0] = rb[0];
			rb_tmp[1] = rb[1];
			count++;
			double PQ = sqrt(pow((rb[0] - rb_tmp[0]), 2) + pow((rb[1] - rb_tmp[1]), 2));

			printf_s("%-10d| (%d,%d) %dms\n", count - 1, rb[0], rb[1], rb[2]);

			printf_s("%f\n", PQ);
			SetCursorPos(rb[0], rb[1]);
			//mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, GetMessageExtraInfo());
			Sleep(rb[2]+1);
		}



		
	}
	printf_s("read_END\n");
	Sleep(1000000);
	



}