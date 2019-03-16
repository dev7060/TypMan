#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int grantaccess=0;
char magicchr[4]="ERX8";
void mainmenu();
void entermenu();
void practice();
int main()
{
    //mainmenu();
    practice();
    return 0;
}
void mainmenu(){
    char str[4];
    do{ system("cls");
        printf("\n\t\t\tTypMan version 1.0.0\n");
        printf("Enter the 4 magic chars to enter\n\n > ");
        scanf("%s", &str);
        if(strcmp(str, magicchr)==0){
                printf("hello");
            grantaccess=1;
        }
        if(grantaccess==0){
            printf("\a\n\n\t\t\tAccess Denied!\n\n\t\t\tTry again\n\n > ");
            scanf("%s", &str);
        }
    }while(grantaccess==0);
    if(grantaccess==1){
        entermenu();
    }
}
void entermenu(){
    int ch;
    system("cls");
    printf("\n\t\t\tTypMan version 1.0.0\n");
    printf("\n\t\t\t1:Practice");
    scanf("%d", &ch);
    switch(ch){
        case 1: practice();
                break;
        default: printf("\aInvalid choice!");
    }

}
void practice(){
    char text[10000]="this is michael";
    /*
    char text[10000]="Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer semper porttitor commodo. Mauris sit amet vehicula quam. Nunc tempus diam dui, eget cursus mauris tincidunt vel. In sed volutpat lectus. Cras sed magna mollis, laoreet turpis eu, pulvinar eros. Vivamus sit amet ullamcorper magna. Suspendisse sed justo velit. Sed fringilla metus ipsum, id venenatis lectus euismod vel. Vivamus sed massa vitae metus hendrerit tincidunt sit amet nec dolor. Etiam ex ex, faucibus non volutpat sed, ultrices in turpis. Cras id commodo lorem. Maecenas sit amet tempus ligula.";
    */
    char ip[10000];
    int ch;
    int i;
    int l1, l2;
    int eq_indicator=0;
    int tempchar;
    do{
            printf("\n\t\t\tEnter text choice: 1/2/3/4/5\n");
            /* scanf("%d", &ch);
            switch(ch){
                case 1: text[10000]="hello this is michael";
                        break;
                case 2: text[10000]="hello this is anna johnson";
                        break;
                default: printf("Invalid choice");
                         return;
            }*/
            fflush(stdin);
            system("cls");
            puts(text);
            printf("\n");
            puts("Enter the above text below\n\n");
            gets(ip);
            //printf("%d\n", strlen(text));
            //printf("%d", strlen(ip));
            //why the freaking heck nothing is working
            l1=strlen(text);
            l2=strlen(ip);
            printf("%d\n", l1);
            printf("%d\n", l2);
            l2=strlen(ip);
            if(l1==l2){
                eq_indicator=1;
                //printf("entered the if body");
                for(i=0; text[i]!='\0'; i++){
                    //printf("heyheyhey");
                    if(text[i]!=ip[i]){
                        //printf("hello world!");
                        eq_indicator=0;
                    }
                }
            }
            //if((strcmp(puts, text))==0){
            //I can't figure out why this goddamn strcmp is not working
            if(eq_indicator==1){
                //system("cls");
                printf("Congrats! You entered the correct text!\nPress enter to continue...");
                getch();
            }
            else if(eq_indicator==0){
                printf("\n\nGoddamn, wrong text. Try again!\n\n");
            }
            system("cls");
            printf("Input 1 to go to the menu (or any other key to exit)...");
            scanf("%d", &tempchar);
        }while(tempchar==1);
}
