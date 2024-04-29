#include <stdio.h>

int main(){
	int n,j,sum;
	while ((scanf("%d", &n)) && n != -1) {
		int arr[100000] = { 0 };
		j = 0;
		sum = 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				arr[j] = i;
				j++;
				sum += i;
			}
		}
		if (n == sum) {
			printf("%d = %d", n, arr[0]);
			for (int i = 1; i < j ; i++) {
				printf(" + %d", arr[i]);
			}
			printf("\n");
		}
		else printf("%d is NOT perfect.\n", n);
		
	}
}