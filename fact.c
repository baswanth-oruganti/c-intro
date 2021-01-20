# include <stdio.h>

long fact(int n);

void main() {
	int n; long int ans;
	printf("enter a number: ");
	scanf("%d",&n);
	ans=fact(n);
	printf("factorial of %d is %ld: ", n, ans);
}

long int fact(int n) {
	if (n==1)
		return n;
	else
		return n*fact(n-1);
}
