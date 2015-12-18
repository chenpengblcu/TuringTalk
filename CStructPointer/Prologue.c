/*SixthDialwithTuring.c: the Sixth dialog with Turing */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define NAME_LENGHT 20
#define MaxSentence  100
#define MAX_RESP 3
void welcomeMessage();
void preprocess_input(char *input);
void cleanString(char *input);
void UpperCase(char *input);
int isPunc(char c);
const char delim[] = "?!.;,";
//���ʴ����ݽṹ
typedef struct {
	char *input;
	char *responses[MAX_RESP];
}QArecord;

//(�ʴ�)֪ʶ��
QArecord KnowledgeBase[] = {
	{"WHAT IS YOUR NAME", 
	{"MY NAME IS ALAN TURING.",
	"YOU CAN CALL ME ALAN TURING.",
	 "WHY DO YOU WANT TO KNOW MY NAME?"}
	},

	{"HI", 
	{"HI THERE!",
	 "HOW ARE YOU?",
	 "HI!"}
	},
		
	{"HOW ARE YOU",
	{"I'M DOING FINE!",
	"I'M DOING WELL AND YOU?",
	"WHY DO YOU WANT TO KNOW HOW AM I DOING?"}
	},

	{"WHO ARE YOU",
	{"I'M AN A.I PROGRAM.",
	"I THINK THAT YOU KNOW WHO I'M.",
	"WHY ARE YOU ASKING?"}
	},

	{"ARE YOU INTELLIGENT",
	{"YES,OFCORSE.",
	"WHAT DO YOU THINK?",
	"ACTUALY,I'M VERY INTELLIGENT!"}
	},

	{"ARE YOU REAL",
	{"DOES THAT QUESTION REALLY MATERS TO YOU?",
	"WHAT DO YOU MEAN BY THAT?",
	"I'M AS REAL AS I CAN BE."}
	}
};
size_t nKnowledgeBaseSize = sizeof(KnowledgeBase)/sizeof(KnowledgeBase[0]);
int main()
{

	char sInput[MaxSentence],sPreviousInput[MaxSentence],sPreviousResponse[MaxSentence];
	char sHittedResponse[MAX_RESP][MaxSentence];
	int nSelection,i,j,bHitted;

//srand��ʼ��α����������ӣ�rand���������
    srand((unsigned) time(NULL));
	welcomeMessage();
    while(1) {
        printf(">");
		//������һ�ε�����
		strcpy(sPreviousInput,sInput);

        gets(sInput);
		preprocess_input(sInput);
		bHitted = 0;
		if (strcmp(sInput,"BYE") == 0) {
			puts("IT WAS NICE TALKING TO YOU, SEE YOU NEXT TIME!");
			break;
		} else {

			for(i = 0; i < nKnowledgeBaseSize;  ++i)   
				if(strcmp((KnowledgeBase[i].input),sInput) == 0){ 

					bHitted  = 1; //���������еĴ�
					for(j = 0; j < MAX_RESP; ++j){
						strcpy(sHittedResponse[j],(KnowledgeBase[i].responses)[j]);
					}
			
				}
			if (bHitted){ 
				nSelection = rand() % MAX_RESP;
				// �����ظ��Ļش�
				if (strcmp(sHittedResponse[nSelection],sPreviousResponse) == 0)
					nSelection = (nSelection + 1)% MAX_RESP;
				puts(sHittedResponse[nSelection]);
				strcpy(sPreviousResponse,sHittedResponse[nSelection]);
			} else{
				puts("Sorry, I Can't catch you!");
			
			}
		}//end_if
    }//end_while

    return 0;
}

void welcomeMessage()
{
	char myName[100];
	char myGender;
	int i=0;
	printf("\t********************************************************\n");
	printf("\t************Welcome to My world��***********************\n");
	printf("\t************������:Turing Dialog ***********************\n");
	printf("\t************����:Chen Peng   ***************************\n");
	printf("\t************�汾��0.6   ********************************\n");
	printf("\t************��ϵ:chenpeng@blcu.edu.cn ******************\n");
	printf("\t************ʱ��:2013��12��16��       *******************\n");
	printf("\t********************************************************\n");
	printf(">what is your name.\n");
	scanf("%s",myName);
	printf(">Welcome to My World, %s!\nwhat is your gender? \n",myName);
	fflush(stdin);//������뻺����
	scanf("%c",&myGender);
	if (myGender == 'M')
		printf(">you are the %dth visitor, Mr.%s!\n",i+1,myName);
	else
		printf(">you are the %dth visitor, Miss %s!\n",i+1,myName);
	fflush(stdin);//������뻺����
}
void preprocess_input(char *input) {
	cleanString(input);
	UpperCase(input);
}

void UpperCase(char *input) {
	while(*input) {
		if ( *input >= 'a' && *input <= 'z' ) {
			(*input) -= 'a' - 'A';
		}
		input++;
	}
}

//�ж��Ƿ��Ǳ�����
int isPunc(char c) {
	int i=0;
	while (delim[i]){
		if (c == delim[i])
			return 1;
		i++;
	}
	return 0;
}

// ���û����������Ƴ����Ͷ���Ŀո�
void cleanString(char *input) {

	int i=0,j=0;

	char prevChar = 0;

	while(*(input+j)) {

		if (isPunc(*(input+j) ) || ( *(input+j) == ' ' && prevChar == ' '))
			j++;
		else {
			*(input+i) = *(input+j);
			prevChar = *(input+j);
			i++;
			j++;
		}		
	}
	*(input+i) = 0;
}