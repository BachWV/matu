
#include <stdio.h>

struct clock{
	int hour;
	int minute;
	int second;
};
typedef struct clock CLOCK;

int main(void)
{
	CLOCK t;
	char a,b;
	int a1[2],a2[2],a3[2];
	scanf("%d%c%d%c%d",&t.hour,&a,&t.minute,&b,&t.second);
	if((t.hour>=0&&t.hour<=23)&&(t.minute>=0&&t.minute<=59)&&(t.second>=0&&t.second<=59)&&&t!=NULL)
	{
		a1[0]=t.hour%10;
		a1[1]=(t.hour-a1[0])/10;
		a3[0]=t.second%10;
		a3[1]=(t.second-a2[0])/10;
		a2[0]=t.minute%10;
		a2[1]=(t.minute-a2[0])/10;
		printf("%d%d:%d%d:%d%d",a1[1],a1[0],a2[1],a2[0],a3[1],a3[0]);
		return 0;
	}
	else
	printf("error");
	return 0;
}