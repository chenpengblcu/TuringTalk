/**********************************
*C语言程序设计——学会与计算机沟通*
*   第三章 选择结构程序设计       *
*         课程导入程序            *  
*
*
*
*           作者：陈鹏            *
*  联系方式：chenpeng@blcu.edu.cn *
*       时间：2014年8月22日       * 
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
	fflush(stdin);//清空输入缓冲区
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
