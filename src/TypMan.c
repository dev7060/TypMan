#include <stdio.h>
#include <string.h>

int main(){
	system("cls");
	system("title TypMan");
	system("COLOR 0E");
	char str[50], buffer[100000], ch;
	int i, j, m;
	char userInputChar, fileName[100];
	char fileNameDir[50];
	FILE *fp;
	while(1){
		system("cls");
		printf("\n\t\t$ ");
		fflush(stdin);
		gets(str);
		if(strcmp(str, "load")==0){
			lb:
			fflush(stdin);
			printf("\n\t\t> ");
			gets(fileName);
			strcpy(fileNameDir, "./data/");
			strcat(fileNameDir, fileName);
			fp = fopen(fileNameDir, "r");
			if(fp==NULL){
				printf("\n\t\tUnable to open file! Try again...");
				goto lb;
			}
			fflush(stdin);
			ch=fgetc(fp);
			i=0;
			strcpy(buffer, " ");
			while(ch!=EOF){
				buffer[i]=ch;
				i++;
				ch=fgetc(fp);
			}
			m=0;
			while(1){
				system("cls");
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
				if(m==strlen(buffer)){
					break;
				}
			}
		}
		else if(strcmp(str, "exit")==0){
			break;
		}
		else{
			system(str);
		}
	}
	return 0;
}
