/**********************************
*C���Գ�����ơ���ѧ����������ͨ*
*   ������ ѡ��ṹ�������       *
*         �γ̵������            *  
*
*
*
*           ���ߣ�����            *
*  ��ϵ��ʽ��chenpeng@blcu.edu.cn *
*       ʱ�䣺2014��8��22��       * 
***********************************/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
	char myCode;
	char myMajor;
	printf("Hello, Dear Eniac.\n");
	printf("what is your name.\n");
	scanf("%c",&myCode);
	printf("Welcome to My World, %c!\n",myCode);
	printf("What is the first letter of the first word of your major\n");
	fflush(stdin);//������뻺����
    myMajor=getchar();
    if(myMajor=='c')
		printf("Computer science, computes everything!\n");
	else
		if(myMajor=='d')
			printf("Digital media technology, technology changes life\n");
		else
			if(myMajor=='i')
				printf("Information management and information system,information casts the future");
	
	system("pause");
	return 0;
}
