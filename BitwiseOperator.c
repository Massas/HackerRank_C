#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {

  short S[n];
  short maxAnd,maxOr,maxXor;
  short andtmp,ortmp,xortmp;

  for (int i=1;i<=n;i++){
      S[i] = i;
  }

  for(int g=1;g<=n;g++){
    for(int j=2;j<=n;j++){
            if(S[g]>=S[j]){
                continue;
            }
            andtmp=S[g] & S[j];
            ortmp=S[g] | S[j];
            xortmp=S[g] ^ S[j];

            if(maxAnd < andtmp && andtmp < k){
                maxAnd = andtmp;
            }
            if(maxOr < ortmp && ortmp < k){
                maxOr = ortmp;
            }
            if(maxXor < xortmp && xortmp < k){
                maxXor = xortmp;
            }
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
