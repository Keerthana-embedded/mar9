#include<stdio.h>
enum vowvel{a=0,e=0,i=0,o=0,u=0};
void cntvowel(char *,char *);
int main()
{
	char s1[20],s2[20];
	puts("enter string 1");
	fgets(s1,20,stdin);
	puts("enter string 2");
	fgets(s2,20,stdin);
	void (*fntn)(char *,char *);
	fntn=cntvowel;
	fntn(s1,s2);

}
void cntvowel(char *p,char *q)
{
	int i,k;
	for(i=0;p[i];i++)
	{      
		char c='0';

		if((p[i]=='a')||(p[i]=='e')||(p[i]=='i')||(p[i]=='o')||(p[i]=='u'))
		{
			for(k=i+1;*(p+k);k++)
			{
				if(p[i]==*(p+k))
				{
				 c='1';
				 break;
				}

			}

                       if(c=='0')
		       {
			for(k=0;q[k];k++)
			{
				if(p[i]==q[k])
				{
			        printf("%c is present\n",p[i]);
				break;
				}
			}
		       }
		}
	}

}
