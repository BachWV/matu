//?????? void Matrix_Mul(int a[3][2], int b[2][4]), ????????????????????????3 * 2?? 2 * 4????
//??????????????????????????????????????
//???��??????????????????????????????��??
//???��
//a = { {1,2},     b = {{1,0,1,1},
//    {3,4},       {0,1,0,1}}
//    {5,6} }
//    ?????
//    1 2 1 3 ???
//    3 4 3 7 ???
//    5 6 5 11 ???
#include<iostream>;
using namespace std;
void Matrix_Mul(int a[3][2], int b[2][4])
{
	int mul[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			mul[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << mul[i][j] << ' ';
		cout << endl;
	}
}