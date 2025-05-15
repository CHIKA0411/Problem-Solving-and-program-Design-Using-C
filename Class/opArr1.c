#include <stdio.h>
int main()
{
int arr[]={8,18,28,38,48};
int *p;
p=&arr[1];
++p;
++*p;
--p;
--*p;
printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
return 0;
}
