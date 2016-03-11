#include<stdio.h>
#include<math.h>
main()
{
	int p,n;
	float i,f;
	printf("请输入本金");
	scanf("%d",&p);	
	printf("请输入期限");
	scanf("%d",&n);
	printf("请输入利率");
	scanf("%f",&i);
	f=p*pow((1+i),n);
	printf("f=%f",f);
	return 0;
}


