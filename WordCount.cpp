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
	printf("字符数：%d\n",num);
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
	printf("字符数：%d\n",num);
	rewind(fp);
	
 } 
int main(int argc ,char *argv[])
{
	FILE *fp;
		fp=fopen(argv[2],"r");//以只读方式打开
		if(fp==NULL)
		{
			printf("不能打开文件");
		} 
		if(strcmp(argv[1],"-c")==0)//字符函数 
		{
			CharCount(fp);
		} 
		else if(strcmp(argv[1],"-w")==0)//单词函数 
		{
			WordCount(fp);
		} 
		else{
			printf("请你重新输入");
		} 
 } 

