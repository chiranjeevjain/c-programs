#include<stdio.h>  
#include<conio.h>  
void main()  
{  
char ch;  
char user_name[128];  
char line[128];  
char str[128];  
char *ptr;  
int i=0;  
FILE *fp;  
  
//Saving username in file  
printf("Enter the username to write in a file:");  
ch=getch();  
while(ch!=13)  
{  
if(ch==8)  
{  
printf("\b");  
putch(NULL);  
printf("\b");  
user_name[i]='\0';  
--i;  
}  
else  
{  
printf("%c",ch);  
user_name[i++]=ch;  
}  
ch=getch();  
}  
user_name[i]='\0';  
ptr=user_name;  
fp=fopen("d:\\user.txt","w+");  
while(*ptr!='\0')  
{  
fputc(*ptr,fp);  
ptr++;  
}  
printf("\nUsername successfully saved in the file");  
  
//Reading username from file and saving to string .  
fseek( fp, 0, SEEK_SET );  
while(fgets(line,sizeof(line),fp)!=NULL)  
   {  
   char *nwln=strchr(line,'\n');  
   if(nwln!=NULL)  
   *nwln='\0';  
   }  
printf("\nUsername in file is :%s",line);  
fp=NULL;  
  
//take username from user to compare.  
printf("\nEnter username to confirm:");  
fgets(str,sizeof(str),stdin);  
str[strlen(str)-1] = '\0';  
if(!strcmp(line,str))  
{  
    printf("\nyou are right");  
}  
else  
{  
    printf("\nyou are wrong");  
}  
  
getch();  
}  