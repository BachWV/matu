void tran(int array[5][3], int out_array[3][5]) {
	if (!array) {
		printf("error");
		return;
	}
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 3;j++) {
			out_array[j][i] = array[i][j];
		}
	}
}