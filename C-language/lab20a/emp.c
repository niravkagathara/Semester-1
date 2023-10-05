
//Create, declare and initialize structure employee.
#include<stdio.h>
struct emp
	{
		int ac,mn,age;
		float h,w;
	};
void main()
{
	
	struct emp a;
	printf("\nenter your employee id:- ");
	scanf("%d",&a.ac);
	printf("\nenter your weight:- ");
	scanf("%f",&a.w);
	printf("\nenter your height:- ");
	scanf("%f",&a.h);
	printf("\nenter your mobile no:- ");
	scanf("%d",&a.mn);
	printf("\nenter your age:- ");
	scanf("%d",&a.age);
	printf("\nemployee code:- %d",a.ac);
	printf("\nweight:- %.2f",(float)a.w);
	printf("\nheight:- %.2f",(float)a.h);
	printf("\nmobile no:-%d ",a.mn);
	printf("\nage:- %d",a.age);
}