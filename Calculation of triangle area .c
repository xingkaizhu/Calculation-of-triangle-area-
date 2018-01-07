#include <stdio.h>
#include <math.h>
int main(){
	int i,a,b,c,T;
	float s,p;
	scanf ("%d",&T);
	
	for (i=1;i<=T;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
	
if ((a+b>c)&&(b+c>a)&&(a+c>b))
{
p=(a+b+c)*0.5;
s=sqrt(p*(p-a)*(p-b)*(p-c));
printf ("%.2f\n",s);
}
else printf("error\n");
	}
	return 0;
	
}
