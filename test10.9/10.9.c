#include<stdio.h>
int main(void)
{
	char name[40];
	printf("Enter your name:");
	scanf_s("%s",name,40);
	printf("Your name is %s. My friend!\n", name);
	printf("Enter your height:");
	float height,weight,BMI;
	scanf_s("%f", &height);
	printf("Enter your weight:");
	scanf_s("%f", &weight);
	BMI = weight / (height * height);
	printf("Your BMI is %f\n", BMI);
	if (BMI >= 18.5 && BMI <= 23.9) {
		printf("����\n");
	}
	else if (BMI > 23.9) {
		printf("����Ҫ����\n");
	}
	else {
		printf("����Ҫ����\n");
	}
	return 0;
}