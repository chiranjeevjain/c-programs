#include<stdio.h>

int main(){
   
    int a,b;
    int sum;

    printf("Enter any two integers: ");
    scanf("%d%d",&a,&b);

    //sum = a - (-b);
    sum = a - ~b -1;

    printf("Sum of two integers: %d",sum);

    return 0;
}



Sample output:

Enter any two integers: 5 10

Sum of two integers: 15
