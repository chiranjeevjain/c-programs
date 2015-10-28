#include<stdio.h>
#define MAX 500

int main(){

    char arr[MAX];

    printf("Enter any paragraph which can include spaces or new line.\n");
    printf("To exit press the tab key.\n");
    scanf("%[^\t]s",arr);

    printf("You had entered: \n");
    printf("%s",arr);

    return 0;
}

Sample output:

Enter any paragraph which can include spaces or new line.
To exit, press the tab key.
C is powerful language.
I am learning c from
cquestionbank.blogspot.com

You had entered:
C is powerful language.
I am learning c from
cquestionbank.blogspot.com
