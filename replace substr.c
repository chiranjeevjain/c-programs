/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
* 
*                      Happy Coding
***********************************************************/
 
#include <stdio.h>
#include <string.h>
 
char *replace_str(char *str, char *orig, char *rep)
{
    static char buffer[4096];
    char *p;
     
    if(!(p = strstr(str, orig)))
    return str;
     
    strncpy(buffer, str, p-str);
    buffer[p-str] = '\0';
     
    sprintf(buffer+(p-str), "%s%s", rep, p+strlen(orig));
     
    return buffer;
}
 
int main(void)
{
    char str[100],str1[50],str2[50];
    printf("Enter a one line string..\n");
    gets(str);
    printf("Enter the sub string to be replaced..\n");
    gets(str1);
    printf("Enter the replacing string....\n");
    gets(str2);
    puts(replace_str(str, str1, str2));
     
    return 0;
}