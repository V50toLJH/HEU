#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0;
	int a,b,c,d,e,f,g,h = 0;
	scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
	int arr[8] = {a,b,c,d,e,f,g,h};
	int num = 0;
	for(i = 0;i < 8;i++)
	{
		if (arr[i] % 2 == 0)
		{
			num += arr[i];
		}
	}
	printf("%d",num);
	return 0;
}


