#include <stdio.h>

int main(){
int x;
printf("Enter the windspeed\n");
scanf("%d",&x);
if(x<25){
printf("not a strong wind");
}
else if(x>=25 | x<=38){
printf("strong wind");
}
else if(x>=39 | x<=54){
printf("gale");
}
else if(x>=55 | x<=72){
printf("whole gale");
}
else if(x>72){
printf("hurricane");
}
else{
printf("no wind");
}

}
