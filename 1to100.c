#include<stdio.h>

int main(){
    int num = 1;

    print(num);

    return 0;
}
int print(num){
    if(num<=100){
         printf("%d ",num);
         print(num+1);
    }
}
