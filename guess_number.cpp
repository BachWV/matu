#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int a, b, x;
	int jishu = 1;
	char c = 'b';

	while (c != 'n') {
		srand(time(NULL));
		x = rand() % 100 + 1;
		//printf("%d",x); 
		scanf_s("%d", &a);

		while (a != x && jishu <= 10) {
			
			if (a < x) {
				printf("���������С�ˣ������\n");
				//	int c=(x+a)/2;
				//	printf("tips:%d\n",c);
			}
			else if (a > x) {
				printf("������������ˣ����С��\n");
				//	int c=(x+a)/2;
				//	printf("tips:%d\n",c);
			}
			else if (a == x) {
				printf("��ϲ�㣬�����\n"); break;
			}
			jishu++;
			scanf_s("%d", &a);
		}
		printf("�㻹Ҫ������y/n");
		c = getchar();
		
		jishu = 1;

	}
	return 0;
}