#include<stdio.h>
struct s1
{
int real;
int img;
};
struct s2
{
int real;
int img;
};
struct s3
{
int real;
int img;
};
int main()
{
        struct s1 a;
	struct s2 b;
	struct s3 c;
printf("enter s1 real\n");
scanf("%d",&a.real);
printf("enter s1 img\n");
scanf("%d",&a.img);
printf("enter s2 real\n");
scanf("%d",&b.real);
printf("enter s2 img\n");
scanf("%d",&b.img);
c.real=a.real+b.real;
c.img=a.img+b.img;
printf("complex number aftre add=%d+j%d",c.real,c.img);
}
