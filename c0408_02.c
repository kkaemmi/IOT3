#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(void)
{
	char str1[4] = "cat";
	char str2[80];
	char nation[6] = "korea";
// ���ڿ� ����
	strcpy_s(str2, sizeof(str2), str1);
	printf("%s,%s\n", str1,str2);
	strcpy_s(str2, sizeof(str2),"I Love You");
	printf("%s\n", str2);
// ���ڿ� ��
	printf("%d\n", !strcmp(str1, "cat"));
	printf("%d\n", !strcmp(nation, "korea"));

	if (!strcmp(nation, "korea")) {
		printf("�� ���ڿ��� ���� ���Դϴ�.");
	}
// ���ڿ� ũ��
	printf("%d,%d\n", strlen(nation), strlen("korea"));   // ����ũ��
	printf("%c,%c,%c\n", nation[0], nation[1], nation[2]);
// ������ ������ : �ٸ� ������ ����� �����͸� �ּҷ� �����Ͽ� ������ͼ� ����ϰ� �ݳ��ϱ����� ����� 
/*
   1. ������ ����(����)
      �ڷ��� * ������;  <-- �ʱⰪ�� �������� ���� ���
	  (������)������ = &�ٸ�������;

	  �ڷ��� * ������ = &�ٸ�������;

   2. ������ �б�(read)
      
	  *�����ͺ���  <-- �ܵ����� ���, ����� ��
	  = *�����ͺ���
	       (����)
   3. ������ ����(����,write)

      *�����ͺ��� = 
	   (����)
	   *�����ͺ��� = *�����ͺ���;
	    (����)        (����)

   4. ������ Ȱ��(*�� ���� �����ͺ��� ��� ���)
      int a = 10;
	  int b = 20;
	  int * ptr = &a;
	  int * ptr1 = &b;
	  ptr          <-- �ּҸ� ����ϰ� �ִ� ����
	  ptr = ptr1;  <-- �ּҸ� ������
	  ptr++;       <-- �ּҸ� ������Ű����
	  --ptr;       <-- �ּҸ� ���ҽ�Ű����
	  ���� : �ּҸ� ����, ����, ����, �ּ� ���, �ּҸ� ó���� �������� �����
*/
}