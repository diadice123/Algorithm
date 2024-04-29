#include <stdio.h>

int right_zero(int n){
    int zr = 0;
    while(n >= 5){
        zr += n / 5;
        n /= 5;
    }
    return zr;
}

int main(){
    int m;
    scanf("%d", &m);
    int left = 1, right = m * 5, result = 0;

    while(left <= right){
        int mid = (left + right) / 2;
        int zero_count = right_zero(mid);

        if(zero_count < m){
            left = mid + 1;
        }
        else{
            right = mid - 1;
            result = mid;
        }
    }

    if(right_zero(result) == m){
        printf("%d", result);
    }
    else{
        printf("-1");
    }
    result = 0;
}