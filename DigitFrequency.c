#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    char str[1000+1];
    scanf("%s",str);
    s = str;

    int array[10];

    for(int i;i<10;i++){
        array[i] = 0;
    }

    /* ������̏I�[�ɒB����܂Ń��[�v */
    while(*s){
        /* �����𐔒l�ɕϊ�����0-9�Ȃ�J�E���g�A�b�v���� */
        if(*s==0x30){
            array[0]++;
        }
        else if(*s==0x31){
            array[1]++;
        }
        else if(*s==0x32){
            array[2]++;
        }
        else if(*s==0x33){
            array[3]++;
        }
        else if(*s==0x34){
            array[4]++;
        }
        else if(*s==0x35){
            array[5]++;
        }
        else if(*s==0x36){
            array[6]++;
        }
        else if(*s==0x37){
            array[7]++;
        }
        else if(*s==0x38){
            array[8]++;
        }
        else if(*s==0x39){
            array[9]++;
        }
    }
}