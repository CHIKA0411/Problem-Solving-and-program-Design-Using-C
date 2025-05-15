#include <stdio.h>
int main()
{
int arr[]={7,17,27,37,47};
int *p;
p=arr+2;
++p;
++*p;
--p;
--*p;
//{7,17,26,38,47}
printf("%d %d %d",p[0],p[1],p[-1]);
 
return 0;
}
