#include <stdio.h>

int main()
{
int i;
int num = 0;
int num1 = 1;
scanf("%d", &i);
if (i < 1 || i >10)
{
printf(??error??);
}
else
{
for (int n = 1; n <= i; n++)
{
num1 *= n;
num += num1;
}printf("%d\n",num);
}
return 0;
}
????????????????????????????????
??????????????CSDN??????HTF?????????????????CC 4.0 BY-SA???��?�??????????????????????????
????????https://blog.csdn.net/hua12ng/article/details/103256838