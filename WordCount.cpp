#include <stdio.h>
#include <string.h>
void CharCount(FILE *fp)
{
	int num=0;
	char ch=fgetc(fp);
	while(!feof(fp)){
		num++;
		ch=fgetc(fp);
	}
	printf("�ַ�����%d\n",num);
	rewind(fp);
	
 } 
 void WordCount(FILE *fp)
{
	int num=1;
	char ch=fgetc(fp);
	while(!feof(fp)){
		if(ch==','||ch==' ')
		num++;
		ch=fgetc(fp);
	}
	printf("�ַ�����%d\n",num);
	rewind(fp);
	
 } 
int main(int argc ,char *argv[])
{
	FILE *fp;
		fp=fopen(argv[2],"r");//��ֻ����ʽ��
		if(fp==NULL)
		{
			printf("���ܴ��ļ�");
		} 
		if(strcmp(argv[1],"-c")==0)//�ַ����� 
		{
			CharCount(fp);
		} 
		else if(strcmp(argv[1],"-w")==0)//���ʺ��� 
		{
			WordCount(fp);
		} 
		else{
			printf("������������");
		} 
 } 

