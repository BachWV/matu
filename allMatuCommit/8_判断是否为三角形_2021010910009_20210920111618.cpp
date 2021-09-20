#include <stdio.h>

int main()
{
    int x,y,z,tem;
    scanf("%d,%d,%d",&x,&y,&z);
    if (x<z) {tem =x;x=z;z=tem;}
    if (x<y) {tem = x;x=y;y=tem;}
    if (y<z) {tem = y;y = z;z = tem;}
    if (x<=0 ||y<=0||z<=0) printf("error");
    else if (y+z>x&&x-y<z) printf("yes");
    else printf("no");
    return 0;
}
