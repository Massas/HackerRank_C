#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {

    int nsum,nS,aS,bS,cS;
    nsum = 0;
    nS = n;
    aS = n-1;
    bS = n-2;
    cS = n-3;

    while(aS!=a && bS!=b && cS!=c){
        nsum = aS + bS + cS;
        aS--;
        bS--;
        cS--;
    }

    return nsum;
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}

