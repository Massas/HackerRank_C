#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {

  short S[n];
  short maxAnd,maxOr,maxNand;
  short andtmp,ortmp,nandtmp;

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
            nandtmp=S[g] ^ S[j];

            if(maxAnd < andtmp && andtmp < k){
                maxAnd = andtmp;
            }
            if(maxOr < ortmp && ortmp < k){
                maxOr = ortmp;
            }
            if(maxNand < nandtmp && nandtmp < k){
                maxNand = nandtmp;
            }
        }
    }
    printf("%d\n",maxAnd);
    printf("%d\n",maxOr);
    printf("%d\n",maxNand);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
