#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    int pwBool;
    char userInput[12] = "";
    char password[12] = "supersecret";

    printf("Enter a password: ");
    scanf("%s",userInput);

    if(strcmp(userInput, password) == 0){
        printf("Great job!");
    }else{
        printf("Try again");
    }
    return 0;
}
