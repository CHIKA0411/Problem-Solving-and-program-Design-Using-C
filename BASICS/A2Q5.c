#include <stdio.h>

int compute_acceleration(float u,float v,float time){
	int a=(v-u)/time;
	return a;
}
int compute_time(float u,float v,float time){
        int s=compute_acceleration(u,v,time);
 	float t=(0-u)/s;
 	return t;
 
}
int main(){
 	float u,v,t; 
 	u=10;
	v=2.5;
	t=1;
	float time;
	time=t/60;
	float s=compute_acceleration(u,v,time);
	float timea=compute_time(u,v,time);

	printf("a =");
	printf("%f",s);
	printf("t=");
	printf("%f",timea);

}
