#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter The Value Of a:\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("The Greatest Of The 3 Numbers Is: %d ", Greatest(a,b,c));
	return 0;
}

int Greatest(int a, int b, int c){

	if (a>b && a>c){
		return a;

	} else if(b>c && b>a){
		return b;

	} else if (c>b && c>a){
		return c;

	}

}
