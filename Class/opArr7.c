#include <stdio.h>

int main()
{
int arr[]={4,14,24,34,44};
int *p;
p=arr+4;
--p;
--*p;
printf("%d %d %d",--*p,*p--,*--p);
 
return 0;
}
