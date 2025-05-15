#include <stdio.h>
int main()
{
int arr[]={6,16,26,36,46};
int *p;
p=arr+2;
--p;
++*p;
++p;
--*p;
printf("%d %d %d %d",arr[3],3[arr],*(arr+3),*(3+arr));
 
return 0;
}
