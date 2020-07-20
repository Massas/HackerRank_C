#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ON 0
#define OFF 1

int main() {

    int i,flag;
    char *s,*c;
    s = malloc(1024 * sizeof(char));
    c = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.

    flag = OFF;

    while(c != NULL){
        if(flag == ON){
            printf("%s\n",c);
            c = strtok(NULL," ");
        }else{
            c = strtok(s," ");
            flag = ON;
        }
    }

    return 0;
}
