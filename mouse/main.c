#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define FILE_NAME "./\\tmp.txt"


void fileopen(FILE* file)
{
	
	if (file == NULL)
	{
		printf_s("file open fall \n");
		return 0;
	}
}


int main()
{

	POINT p;
	FILE* fp;

	int* xy[2] = { 0, };
	int StartTime = 0, StopTime = 0;
	int check = 0, count = 0;
	int* readbuffer[3] = { 0, };

	
	remove(FILE_NAME);
	printf_s("wait 3sec");
	Sleep(3000);
	printf_s("start now");

	while (1)
	{
		if (check == 1)
		{
			StartTime = clock();
			check = 0;
		}

		GetCursorPos(&p); //커서 좌표 받아오기
		if ((xy[0] != p.x) | (xy[1] != p.y)) //좌표의 변화가 있는경우만 
		{
			StopTime = clock();
			check = 1;
			xy[0] = p.x;
			xy[1] = p.y;
			
			

			printf_s("%d : X= %d, Y= %d : %dms\n", count,(int)xy[0], (int)xy[1], (StopTime - StartTime));

			fopen_s(&fp, FILE_NAME, "a+");
			//fileopen(fp);

			//fprintf_s(fp, "%d %d %d\n", (int)xy[0], (int)xy[1], (StopTime - StartTime));

			//fclose(fp);

			count++;

		}

	}

	fclose(fp);
	return 0;
}