#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char pArr[6][17] = {"SuperSecret", "GreatPasswordBro", "NeverGonnaGuess", "ClassicIncoming", "password123", "TaylorTaylor"};
int aLen = sizeof(pArr) / sizeof(pArr[0]);

int aLoc(){
    return rand() % (aLen);
}

int main(int argc, char *argv[]){
    srand(time(0));
    int arrayLocation = aLoc();
    char userInput[20] = "";
    char password[17];
    strcpy(password, pArr[arrayLocation]);

    printf("Hint:%d\n -Enter the Password: ", arrayLocation);
    scanf("%s", userInput);

    if(strcmp(userInput, password) == 0){
        printf("Great job!");
    }else{
        printf("Try again");
    }
    return 1;
}


