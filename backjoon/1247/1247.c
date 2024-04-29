#include <stdio.h>
#include <math.h>

int main(){
    long long int s = 0;
    int n, tmp_big, tmp_small, big, small, sign_big, sign_small;
    int sign[4] = 0;
    for (int i = 0; i < 3; i++){
        big = 0;
        small = 0;
        scanf("%d", n);
        for(int j = 0; j < n; j++){
            long long int tmp;
            scanf("%lld", &tmp);
            if(tmp > 1000000000){
                tmp_big = tmp / 1000000000;
                tmp_small = tmp % 1000000000;
            }
            big += tmp_big;
            small += tmp_small;
            if(big < 0){
                
            }
        }
        for(int j = 0; j < n; j++){
            
        }
        s = 0;
    }
}