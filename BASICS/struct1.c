#include <stdio.h>

struct Student{
	int rno;
	float cgpa;
	float balance;	
	
	};
int main(){
	
	struct Student student1,student2;
	
	printf("Enter the details for student 1:\n");
	printf("Roll Number");
	scanf("%d",&student1.rno);
	printf("CGPA : ");
	scanf("%f",&student1.cgpa);
	printf("balance");
	scanf("%f",&student1.balance);
	
	printf("Enter the details for student 2:\n");
	printf("Roll Number");
	scanf("%d",&student2.rno);
	printf("CGPA : ");
	scanf("%f",&student2.cgpa);
	printf("balance");
	scanf("%f",&student2.balance);
	
	printf("\nDeatils of Student 1:\n");
	printf("Roll Number %d \n",student1.rno);
	printf("CGPA %.2f\n",student1.cgpa);
	printf("Balance : %.2f \n",student1.balance);
	
	
	printf("\nDeatils of Student 2:\n");
	printf("Roll Number %d \n",student2.rno);
	printf("CGPA %.2f\n",student2.cgpa);
	printf("Balance : %.2f \n",student2.balance);
	
	
	return 0;
	
	
}

