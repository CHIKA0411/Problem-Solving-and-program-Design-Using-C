#include <stdio.h>
#include <math.h>
void separate(double num, char *sn,int *wl,double *fr);
int main(void){
 	double value;
 	char sn;
 	int wl;
 	double fr;
 	
 	printf("Enter the value");
 	scanf("%lf",&value);
 	separate(value,&sn,&wl,&fr);
 	
 	printf("value %.4f\n sign : %c\n",value,sn);
 	printf("whole no magnitude: %d\n",wl);
 	printf("fractional part: %.4f\n",fr);
 	


}

void separate(double num, char *sn,int *wl,double *fr){
	double magnitude;
	if(num<0)
	*sn='-';
	else if(num==0)
	*sn=' ';
	else
	*sn='+';
	
	magnitude =fabs(num);
	*wl=floor(magnitude);
	*fr=magnitude-*wl;
	
}
