#include <stdio.h>


int sum(int n);

void main() {
	int n, ans;
	printf("enter a number: ");
	scanf("%d", &n);
	ans=sum(n);
	printf("sum of first %d numbers is %d \n", n,ans);
}


int sum(int n) {
	int i, sum;
	for (i=1;i<=n;++i) {
		sum+=i;
	}
	return sum;
}

