
//求方程组
//ax+by=c
//dx+ey=f
//x=ce-bf/ae-bd
//y=cd-af/bd-ae
#include <stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	printf("请输入x,y前面的系数以及c,f的值\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&d,&e,&c,&f);
	x=(c*e-d*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	printf("x值为%lf,y值为%lf",x,y);
	return 0; 
 }
