#include <stdio.h>
#include <string.h>

int main(){
	system("cls");
	char str[50], buffer[1000], ch;
	int i=0, j, m, lineCount=0;
	char userInputChar, fileName[100]="data.dat";
	FILE *fp;
	printf("$ ");
	//scanf("%s", &str);
	gets(str);
	lb:
	if(strcmp(str, "begin")==0){
	//printf("entered");
	fp = fopen(fileName, "r");
	fflush(stdin);
	ch=fgetc(fp);
	while(ch!=EOF){
		buffer[i]=ch;
		i++;
		ch=fgetc(fp);
	}
	m=0;
	while(1){
		system("cls");
		/*
		if(m==1){
			printf("%c", buffer[m-1]);
		}
		*/
		lineCount=0;
		printf("\n\t");
		for(j=m; j<strlen(buffer); j++){
			printf("%c", buffer[j]);
			if(j%100==0&&j!=0){
				printf("\n\t");
			}
		}
		printf("\n\n\t");
		userInputChar=getche();
		if(userInputChar==buffer[m]){
			m++;
		}
	}
	}
	else if(strcmp(str, "load")==0){
		fflush(stdin);
		char tempFileName[100];
		printf("Input Filename.extension: ");
		gets(tempFileName);
		strcpy(fileName,tempFileName);
		strcpy(str, "begin");
		goto lb;
	}
	else{
		system(str);
	}

	return 0;
}
