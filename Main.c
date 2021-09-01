#include <stdio.h>
#include <stdlib.h>
int roman_numerical(int);
int prime_factor(int);

int main(){
    int Ques_no,num;
    printf("Enter Question No:-\n1. Roman numerical\n2.Prime Factor\n");
    scanf("%d",&Ques_no);
    if(Ques_no==1){
        roman_numerical(Ques_no);
    }
    else{
        printf("Enter Number\n");
        scanf("%d",&num);
        prime_factor(num);
    }
    return 0;
}

int roman_numerical(int a){
    int num,I,V,X,L,C,D,M,n;
    printf("Enter The Number\n");
    scanf("%d",&num);
    M = num / 1000;
    num = num % 1000;
    for (size_t n = 0; n < M; n++)
    {
        printf("m");
    }
    D = num / 500;
    num = num % 500;
    for (size_t n = 0; n < D; n++)
    {
        printf("d");
    }
    C = num / 100;
    num = num % 100;
    for (size_t n = 0; n < C; n++)
    {
        printf("c");
    }
    L = num / 50;
    num = num % 50;
    for (size_t n = 0; n < L; n++)
    {
        printf("l");
    }
    X = num / 10;
    num = num % 10;
    for (size_t n = 0; n < X; n++)
    {
        printf("x");
    }
    V = num / 5;
    num = num % 5;
    for (size_t n = 0; n < V; n++)
    {
        printf("v");
    }
    I = num;
    for (size_t n = 0; n < I; n++)
    {
        printf("i");
    }
}
int prime_factor(int num){
    int flag;
    for ( int i = 2; i <= num; i++){
        if(num % i == 0){
            flag = 1;
            for(int j = 2; j <= i/2; j++){
                if(i%j == 0){
                    flag = 0;
                    break;
                }

            }
            if(flag == 1){
                printf("%d ",i);
            }
        }

    }
}
