#include<stdio.h>
int main()
{
  int n,i,money,num,count=0;
printf("Enter how many types of coins in array ");
scanf("%d",&n);
int coin[n];

for(i=0;i<n;i++)
{
printf("Enter coin[%d] ",i);
scanf("%d",&coin[i]);
}

printf("Enter money for divide in coins ");
scanf("%d",&money);

for(i=n-1;i>=0;i--)
{
num=money/coin[i];
count=count+num;
if(num!=0)
{
printf("coin[%d]= %d, coin[%d]=%d\n",i,coin[i],i,num);
}
money=money-(num*coin[i]);
if(money==0)
{
	printf("total coin %d",count);
	return 0;
}
}

if(money!=0)
{
	printf("total coin %d \nremaining money %d",count,money);
}
return 0;
}
