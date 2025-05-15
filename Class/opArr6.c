#include <stdio.h>

int main()
{
int arr[]={5,15,25,35,45};
int *p;
p=arr+1;
++p;
++*p;
//{5,15,26,35,45}
printf("%d %d %d",++*p,*p++,*++p);
 
return 0;
}

