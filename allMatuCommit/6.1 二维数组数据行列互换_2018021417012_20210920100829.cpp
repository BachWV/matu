#include<stdio.h>
#include<math.h>

void tran(int array[5][3], int out_array[3][5]) {
	
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 3;j++) {
			if (!array[i][j]) {
				printf("error");
				return;
			}
			out_array[j][i] = array[i][j];
		}
	}
}