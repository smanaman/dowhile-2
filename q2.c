#include<stdio.h>
int main(){
int n,sum=1;
printf("Enter any numbr i give you  factorial \n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    sum *= i;
}
printf(" you number  factorial %d\n\n",sum);
 return 0;
}