#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	char c1[]="Fly Weight",c2[]="Super Fly Weight",c3[]="Bantam Weight",
	c4[]="Super Bantam Weight",c5[]="Feather Weight",c6[]="Super Feather Weight",c7[]="Light Weight",
	c8[]="Super Light Weight",c9[]="Welter Weight",c10[]="Super Welter Weight",c11[]="Middle Weight",
	c12[]="Super Middle Weight",c13[]="Light Heavy Weight",c14[]="Super Light Heavy Weight",c15[]="Cruiser Weight",
	c16[]="Super Cruiser Weight",	c17[]="Heavy Weight",	c18[]="Super Heavy Weight";
	scanf("%d", &n);
	if(0<=n&&n<=111)
	{
		printf("%s", c1);
	}
	if(112<=n&&n<=114)
	{
		printf("%s", c2);
	}
	if(115<=n&&n<=117)
	{
		printf("%s", c3);
	}
	if(118<=n&&n<=121)
	{
		printf("%s", c4);
	}
	if(122<=n&&n<=125)
	{
		printf("%s", c5);
	}
	if(126<=n&&n<=129)
	{
		printf("%s", c6);
	}
	if(130<=n&&n<=134)
	{
		printf("%s", c7);
	}
	if(135<=n&&n<=139)
	{
		printf("%s", c8);
	}
	if(140<=n&&n<=146)
	{
		printf("%s", c9);
	}
	if(147<=n&&n<=153)
	{
		printf("%s", c10);
	}
	if(154<=n&&n<=159)
	{
		printf("%s", c11);
	}
	if(160<=n&&n<=166)
	{
		printf("%s", c12);
	}
	if(167<=n&&n<=173)
	{
		printf("%s", c13);
	}
	if(174<=n&&n<=182)
	{
		printf("%s", c14);
	}
	if(183<=n&&n<=188)
	{
		printf("%s", c15);
	}
	if(189<=n&&n<=197)
	{
		printf("%s", c16);
	}
	if(198<=n&&n<=208)
	{
		printf("%s", c17);
	}
	if(209<=n)
	{
		printf("%s", c18);
	}
	
	
}
