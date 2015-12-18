/*FifthDialwithTuring.c: the Fifth dialog with Turing */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define NAME_LENGHT 20
#define MaxSentence  100
void welcomeMessage();
int main()
{

	char sInput[MaxSentence];
	char Response[][MaxSentence] = {
        "I HEARD YOU!",
        "SO, YOU ARE TALKING TO ME.",
        "CONTINUE, I’M LISTENING.",
        "VERY INTERESTING CONVERSATION.",
        "TELL ME MORE..."
    };
	int nSelection;
	//srand初始化伪随机数的种子，rand产生随机数
    srand((unsigned) time(NULL));
	welcomeMessage( );
	while(1)
	{
		printf(">");
        scanf("%s",sInput);
		fflush(stdin);//清空输入缓冲区
        if (strcmp(sInput,"bye" )==0)
			break;
		else{
			nSelection = rand() % 5;
			printf("%s\n",Response[nSelection]);		
		}
	}
    return 0;
}

void welcomeMessage()
{
	char myName[100];
	char myGender;
	int i=0;
	printf("\t********************************************************\n");
	printf("\t************Welcome to My world！***********************\n");
	printf("\t************程序名:Turing Dialog ***********************\n");
	printf("\t************作者:Chen Peng   ***************************\n");
	printf("\t************版本：0.5   ********************************\n");
	printf("\t************联系:chenpeng@blcu.edu.cn ******************\n");
	printf("\t************时间:2013年12月4日       *******************\n");
	printf("\t********************************************************\n");
	printf(">what is your name.\n");
	scanf("%s",myName);
	printf(">Welcome to My World, %s!\nwhat is your gender? \n",myName);
	fflush(stdin);//清空输入缓冲区
	scanf("%c",&myGender);
	if (myGender == 'M')
		printf(">you are the %dth visitor, Mr.%s!\n",i+1,myName);
	else
		printf(">you are the %dth visitor, Miss %s!\n",i+1,myName);
	fflush(stdin);//清空输入缓冲区
}
