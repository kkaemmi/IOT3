#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)
/*
typedef struct profile
{
	int age;
	double height;
}profile;
typedef struct student
{
	profile pf;
	int id;
	double grade;
}std;
int main(void)
{
	std yuni;
	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("%d,%.2lf,%d,%.2lf \n", yuni.pf.age, yuni.pf.height, yuni.id, yuni.grade);

	return 0;
}
*/
/*
typedef struct std
{
	int id;
	char name[20];
	double grade;
}std;
int main(void)
{
	std s1 = { 315, "홍길동", 2.4 };
	std s2 = { 315, "이순신", 3.7 };
	std s3 = { 315, "세종대왕", 4.4 };
	std max;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("%d,%s,%.2f \n", max.id, max.name, max.grade);

	return 0;
}
*/

typedef struct vision
{
	double left;
	double right;
}vision;
vision exchange(vision robot);
int main(void)
{
	vision robot;
	printf("시력 입력 : >>");
	scanf_s("%lf,%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("%.2lf,%.2lf \n", robot.left, robot.right);

	return 0;
}
vision exchange(vision robot)   // visipn robot = robot
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}