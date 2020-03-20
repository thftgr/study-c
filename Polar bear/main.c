#include <stdio.h>
#include <time.h>
#define LOOP 100



void main()
{
	int ii[2][2][2][2] = {
		{
			{
				{0,1},
				{2,3}
			},
			{
				{4,5},
				{6,7}
			}
		},
		{
			{
				{8,9},
				{10,11}
			},
			{
				{12,13},
				{14,15}
			}
		}
	};
	int count = 10000000;
	int BIN[4] = { 1,1,1,1 };
	int buffer;
	
	__int64 timeAdd[4][LOOP] = { 0, };

	clock_t start, end;

	{
		printf("count :%d\n\n", (int)count*LOOP);
		for (int i = 0; i < LOOP; i++)
		{
			{
				start = clock();
				for (int i = 0; i < count; i++)
				{
					buffer = (BIN[0] * 8) | (BIN[1] * 4) | (BIN[2] * 2) | BIN[3];
				}
				end = clock();
				buffer = 0;
				timeAdd[0][i] += ((__int64)(end - start));
			}

			{
				start = clock();
				for (int i = 0; i < count; i++)
				{
					buffer = (BIN[0] * 8) + (BIN[1] * 4) + (BIN[2] * 2) + BIN[3];

				}
				end = clock();
				buffer = 0;
				timeAdd[1][i] += ((__int64)(end - start) / 1000);
			}

			{
				start = clock();
				for (int i = 0; i < count; i++)
				{

					buffer = (BIN[0] << 3) | (BIN[1] << 2) | (BIN[2] << 1) | BIN[3];
				}
				end = clock();
				buffer = 0;
				timeAdd[2][i] += ((__int64)(end - start) / 1000);
			}

			{
				start = clock();
				for (int i = 0; i < count; i++)
				{
					buffer = ii[BIN[0]][BIN[1]][BIN[2]][BIN[3]];
				}
				end = clock();
				buffer = 0;
				timeAdd[3][i] += ((__int64)(end - start) / 1000);
			}
		}
		__int64 sum[4] = { 0, };
		for (int i = 0; i < LOOP; i++)
		{
			sum[0] += timeAdd[0][i];
			sum[1] += timeAdd[1][i];
			sum[2] += timeAdd[2][i];
			sum[3] += timeAdd[3][i];
		}
		printf("OR  :%f\nADD :%f\nBIT :%f\nRAM :%f", (sum[0] / LOOP), (sum[1] / LOOP), (sum[2] / LOOP), (sum[3] / LOOP));
	}
}



