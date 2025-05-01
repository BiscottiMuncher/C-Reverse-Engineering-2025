#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>

char a[] = {"abcdghij890-=~!@#klm`EFGH_+efSTWXYI12,567$yz(){}[ABCDJKL^&OP*nopqrstxM34]:;.?NQRZ"};
int8_t aL = sizeof(a) - 1;

int aR(int range){
    return (rand() % range);
}

int *gps(int sz){
    int *pd = (int *)malloc(sz * sizeof(int));
    for(int i = 0; i < sz; i++){
        pd[i] = aR(aL);
    }
    return pd;
}

char *gpa(int *valArr, int sizePass){
    char *pd = (char *)malloc((sizePass + 1) * sizeof(int));
    for(int i = 0; i < sizePass; i++){
        pd[i] = a[valArr[i]];
    }
    pd[sizePass] = '\0';
    return pd;
}

int main(int argc, char *argv[]){
    srand((time(NULL)*(getpid())));
    int arrR = aR(aL) + 1;
    int *arrT = gps(arrR); 

    char ui[90];

    printf("Enter the Password: ");
    scanf("%s", ui);

    if(strcmp(ui, gpa(arrT, arrR)) == 0){
        printf("Great job!");
    }else{
        printf("Try again");
    }

    free(arrT);
    return 0;
}

