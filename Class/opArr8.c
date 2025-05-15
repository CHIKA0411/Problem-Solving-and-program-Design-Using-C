#include <stdio.h>

int main()
{
int arr[]={5,15,25,35,45};
int *p;
++arr;
++*arr;
--arr;
--*arr;
printf("%d %d %d",arr[0],arr[1],arr[2]);
 
return 0;
}
