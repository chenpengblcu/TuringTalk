/**********************************
*C语言程序设计——学会与计算机沟通*
*     第二章 C语言程序基础        *
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
int main()
{
	char myCode;
	printf("I:Hello, Dear Eniac.\n");
	printf("Eniac:what is your name.\n");
	scanf("%c",&myCode);
	printf("Welcome to My World, %c!\n",myCode);
	system("pause"); //解决部分系统在开发环境下运行程序后直接退出的问题
    return 0;
}
