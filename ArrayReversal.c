#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    int rev[num];
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
        rev[num - i - 1] = *(arr + i);
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(rev + i));
    return 0;

}
