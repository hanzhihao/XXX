#include<stdio.h>
#include<math.h>
main()
{
	int p,n;
	float i,f;
	printf("�����뱾��");
	scanf("%d",&p);	
	printf("����������");
	scanf("%d",&n);
	printf("����������");
	scanf("%f",&i);
	f=p*pow((1+i),n);
	printf("f=%f",f);
	return 0;
}


