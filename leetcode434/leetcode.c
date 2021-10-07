#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countSegments(char* s){

    if(strlen(s) == 0){
        return 0;
    }

    char *pLeft = s , *pRight = s;
    int res = 0 ;

    while(*pRight != '\0' && *pRight == ' '){
        pRight++;
    }

    if(*pRight == '\0'){
        return 0;
    }

    pLeft = pRight;

    while(*pLeft != '\0' && *pRight != '\0'){
        while(*pRight != ' ' && *pRight != '\0'){
            pRight ++;
        }

        if(pRight - pLeft > 0){
            res++;
        }

        while( *pRight == ' '){
            pRight++;
        }

        pLeft = pRight;

    }

    return res;

}

int main(){
	char *s = "Hello, my name is John";
    // char *s = "love live! mu'sic forever";
    // char *s = "";
    int res = countSegments(s);

    printf("Res : %d \r\n" , res);
    return 0;

}

