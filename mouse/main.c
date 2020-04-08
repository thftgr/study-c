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

int filter_0(POINT p)
{
	
	
}


int main()
{

	POINT p;
	POINT xy_data[1000] = { 0, };
	FILE* fp;
	

	int* xy[2] = { 0, };
	int StartTime = 0, StopTime = 0;
	int check = 0, count = 0;
	int* readbuffer[3] = { 0, };

	
	//remove(FILE_NAME);
	//printf_s("wait 3sec");
	//Sleep(3000);
	//printf_s("start now");


	fopen_s(&fp, FILE_NAME, "a+");

	fileopen(fp);

	fprintf_s(fp, "아차키,아차키21,아차키22,,아차키5\n");

	fclose(fp);

	//while (1)
	//{
	//	if (check == 1)
	//	{
	//		StartTime = clock();
	//		check = 0;
	//	}

	//	GetCursorPos(&p); //커서 좌표 받아오기
	//	if ((xy[0] != p.x) | (xy[1] != p.y)) //좌표의 변화가 있는경우만 
	//	{
	//		StopTime = clock();
	//		check = 1;
	//		//xy[0] = p.x;
	//		//xy[1] = p.y;

	//		//printf_s("%d : X= %d, Y= %d : %dms\n", count,(int)xy[0], (int)xy[1], (StopTime - StartTime));
	//		//fopen_s(&fp, FILE_NAME, "a+");
	//		//fileopen(fp);

	//		//fprintf_s(fp, "%d,%d,%d\n", (int)xy[0], (int)xy[1], (StopTime - StartTime));

	//		//fclose(fp);

	//		if (count <= 1000)
	//		{
	//			//xy_data[count].x = p.x;
	//			//xy_data[count].y = p.y;
	//			//printf_s("%d : X= %d, Y= %d : %dms\n", count, (int)xy_data[count].x, (int)xy_data[count].y, (StopTime - StartTime));
	//			fopen_s(&fp, FILE_NAME, "a+");

	//			fileopen(fp);

	//			fprintf_s(fp, "%d,%d\n", count, count, (StopTime - StartTime));

	//			fclose(fp);

	//		}
	//		else
	//		{
	//			break;
	//		}
	//		count++;

	//	}

	//}

	return 0;
}