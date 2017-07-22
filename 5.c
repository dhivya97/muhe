#include<stdio.h>
void main()
{
inta,b,c;
printf("enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d largest number",a);
elseif(b>c)
printf("%d largest number",b);
else
printf("%d largest number",c);
}
