/**********************************
*C���Գ�����ơ���ѧ����������ͨ*
*   ������ �������鴦����������   *
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
#define NUMBER_STU 3
#define NUMBER_COURSE 171
#define NAME_LENGHT 50
#define CCOURSE_NUM 2
int main()
{
	char myName[NAME_LENGHT];
	char myGender;
	int temp,MidTerm_Score[NUMBER_STU][NUMBER_COURSE];
	int i,j,k;
	for (i=0;i<NUMBER_STU;i++)
	{
		printf("Hello, Dear Eniac.\n");
		printf("what is your name.\n");
		scanf("%s",myName);
		printf("Welcome to My World, %s!\nwhat is your gender? \n",myName);
		fflush(stdin);//������뻺����
		scanf("%c",&myGender);
		if (myGender == 'M')
			printf("you are the %dth visitor, Mr.%s!\n",i+1,myName);
		else
			printf("you are the %dth visitor, Miss %s!\n",i+1,myName);
		fflush(stdin);//������뻺����
		for(j=0;j<NUMBER_COURSE;j++)
		{
			printf("��ĵ�%d�ſγ̳ɼ��ǣ�",j+1);
			scanf("%d",&MidTerm_Score[i][j]);
			printf("֪����!\n");
			fflush(stdin);//������뻺����
		}
	}
	//�����ǿ˸������ͬѧ��C���Կγ�����
	for (i=0;i<NUMBER_STU;i++)
	{
		for (j=0;j<NUMBER_STU-i-1;j++)
		{
				if (MidTerm_Score[i][CCOURSE_NUM]>MidTerm_Score[i+1][CCOURSE_NUM])
				{
					
					for (k=0;k<NUMBER_COURSE;k++)
					{
						temp = MidTerm_Score[i][k];
						MidTerm_Score[i][k] = MidTerm_Score[i+1][k];
						MidTerm_Score[i+1][k] = temp;
					}
				}
		}
	}
	for(i=0;i<NUMBER_STU;i++)
		printf("%d\t",MidTerm_Score[i][CCOURSE_NUM]);
	printf("\n");
	system("pause"); 
    return 0;
}