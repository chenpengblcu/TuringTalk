/**********************************
*C���Գ�����ơ���ѧ����������ͨ*
*   ������ ѭ���ṹ�������       *
*         �γ̵������            *  
*
*
*
*           ���ߣ�����            *
*  ��ϵ��ʽ��chenpeng@blcu.edu.cn *
*       ʱ�䣺2014��8��22��       * 
***********************************/
#include <stdio.h>
#include <stdlib.h>
#define MAXVISTORS 171
int main()
{
	char myCode,myGender,myMajor;
	int i;
	int CMajorCounter = 0;
	int DMajorCounter = 0;
	int IMajorCounter = 0;
	for (i=0;i<MAXVISTORS;i++)
	{
		printf("Hello, Dear Eniac.\n");
		printf("what is your name.\n");
		scanf("%c",&myCode);
		printf("Welcome to My World, %c!\nwhat is your gender? \n",myCode);
		fflush(stdin);//������뻺����
		scanf("%c",&myGender);
		if (myGender == 'M')
			printf("you are the %dth visitor, Mr.%c!\n",i+1,myCode);
		else
			printf("you are the %dth visitor, Miss %c!\n",i+1,myCode);
		fflush(stdin);//������뻺����
		printf("What is the first letter of the first word of your major\n");
		fflush(stdin);//������뻺����
		myMajor=getchar();
		if(myMajor=='c')
		{
			printf("Computer science, computes everything!\n");
			CMajorCounter++;
		}
		else
			if(myMajor=='d')
			{
				printf("Digital media technology, technology changes life\n");
				DMajorCounter++
			}
			else
				if(myMajor=='i')
				{
					printf("Information management and information system,information casts the future");
					IMajorCounter++;
				}
				else
					printf("are you sure? maybe you input wrong character.\n");
		fflush(stdin);//������뻺����
	}
	printf("�����רҵ��%c��ѧ����\n ����ý��רҵ��%c��ѧ����\n��Ϣ����רҵ��%c��ѧ����\n",CMajorCounter,DMajorCounter,IMajorCounter);
	system("pause"); 
    return 0;
}