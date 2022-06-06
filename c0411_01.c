// 1차원 포인터
//                   int a[&a] = 100;  & --> 주소
//                   int b[&b] = 200;
// 1. 선언(정의) --> int * num[&num] = &a; <-- 초기값
//                 - int * num1[&num1];
//                   num1 = &b;
// 2. read(읽기)     *num  --> 100기억하고 있음(값)
//                   = *num1  --> 200기억하고 있음(값)
// 3. write(저장)    *num = 1000; --> a = 1000값이 변경됨
//                   *num1 = 2000; --> b = 2000값이 변경됨
// 4. 주소의 역할 실행
//                   num <-- a의주소
//                   num++; <-- 주소를 가지고 연산을 할 수 있음
//                   num1 <-- b의주소
//                   --num1; <-- 주소를 가지고 연산을 할 수 있음
// 1차원 배열 <--> 1차원 포인터와 데이터를 주거니 받거니할 수 있음(level이 같은 위치)
#include <stdio.h>
/*
void main(void)
{
	int num = 100;
	int*ptr = &num;
	printf("%#X,%#X\n", &num, ptr);   // 주소, 주소
	printf("%d,%d\n", num, *ptr);     //  100, 100
	*ptr = 1234;
	printf("%d,%d\n", num, *ptr);     // 1234. 1234
	*ptr = *ptr + 1000;               // 2234
	printf("%d,%d\n", num, *ptr);     // 2234, 2234
	num = num - 1000;                 // 1234
	printf("%d,%d\n", num, *ptr);     // 1234, 1234
	
 // *ptr++;                           // 1번 : ++(주소를 1칸 증가) --> 2번 : *(값 read)
 //  prt++;                              1번 : ++(주소를 1칸 증가)
	(*ptr)++;                         // 1235

	printf("%d,%d\n", num, *ptr);     // 1235, 1235
}
*/
/*
void main(void)
{
	int a = 10, b = 15, total;
	double avg = 123.35;
	int*pa, *pb;
	int*pt = &total;
	double*pg = &avg;

	// double pi = 3.141592;
    const double pi = 3.141592; // 변수를 --> 상수로 바꿔줌(상수화된 변수)pi = 3.141592

	pa = &a; 
	pb = &b;

	*pt = *pa + *pb; 
	*pg = *pt / 2.0;

	printf("두 정수값 : %d,%d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %2lf\n", *pg);
	// pi = 200.0;
	printf("%.1f\n", pi);
}
*/
void main(void)
{
	int a = 100; int b = 200; int c = 300;
	const int x = 100;
	const int *pa = &a;   // const *포인터변수 = &주소; <-- *포인터변수로 값을 수정할 수 없음
	a = 999;
	*pa = 888;
	int*const pc = &c;
	pc = &a;              // 자료형*constㅂ녀수 = &주소; <-- 변수로 다른 주소를 수정할 수 없음

	const int* const pd = &c;
//  1. &pd = c의 값을 수정할 수 없음(값 수정 불가)   <-- 값 불변
//  2. pd = &a처럼 주소를 수정할 수 없음(주소 수정 불가) <-- 주소 불변

	printf("%d\n", *pa);
	printf("%d\n", *pc);

}