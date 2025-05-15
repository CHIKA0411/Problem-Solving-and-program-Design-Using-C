#include <stdio.h>

int main()
{
int arr[]={9,19,29,39,49};
int *p;
p=arr; //&arr[0]
++p;
++*p;
--p;
--*p;
printf("%d%d%d%d%d",arr[0],arr[1],arr[2],arr[3],arr[4]);
return 0;
}
