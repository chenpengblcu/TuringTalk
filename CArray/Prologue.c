/**********************************
*C语言程序设计——学会与计算机沟通*
*   第五章 利用数组处理批量数据   *
*         课程导入程序            *  
*
*
*
*           作者：陈鹏            *
*  联系方式：chenpeng@blcu.edu.cn *
*       时间：2014年8月22日       * 
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
		fflush(stdin);//清空输入缓冲区
		scanf("%c",&myGender);
		if (myGender == 'M')
			printf("you are the %dth visitor, Mr.%s!\n",i+1,myName);
		else
			printf("you are the %dth visitor, Miss %s!\n",i+1,myName);
		fflush(stdin);//清空输入缓冲区
		for(j=0;j<NUMBER_COURSE;j++)
		{
			printf("你的第%d门课程成绩是：",j+1);
			scanf("%d",&MidTerm_Score[i][j]);
			printf("知道了!\n");
			fflush(stdin);//清空输入缓冲区
		}
	}
	//埃尼亚克给班里的同学按C语言课程排序
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