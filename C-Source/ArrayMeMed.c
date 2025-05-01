#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

char a[] = {"abcdefghijkjlnmopqrstuvwxyz"};
int8_t pArr[4][8] = {{16,0,19,19,23,15,18,3}, {26,21,2,2,7,8,13,8}, {23,8,18,10,12,8,2,7}, {4,13,22,4,8,6,12,4}}; 


char *gPw(int8_t numArr[], short aLen){
    char *output = (char *)malloc(aLen + 1); 
    for(int i = 0; i < aLen; i++){
        output[i] = a[numArr[i]];
    }
    output[aLen] = '\0'; 
    return output;
}

int8_t aLoc(){
    srand(time(0));
    return rand() % 4;
}


int8_t cmpPW(char *uI, int8_t aLen, char *p){
    for(int i = 0; i < aLen; i++){
        if(uI[i] != p[i]){
            return 1;
        }else{
            return 0;   
        }
    }
}

int main(int argc, char *argv[]){
    
    int8_t aLen = sizeof(pArr[0]) / sizeof(pArr[0][0]);
    int8_t rAloc = aLoc(aLen);
    char *gp = gPw(pArr[rAloc], aLen);
    char uI[100];
    printf("%s", "Enter the password: ");
    scanf("%s", uI);
    if(cmpPW(uI, aLen, gp) == 0){
        printf("Great Job!\n");
    }else{
        printf("Try Again.\n");
    }
    free(gp);
}