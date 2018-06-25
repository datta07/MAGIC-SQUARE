/*
   CALANDER PROGRAM IN C
                                             -garuda
    writter -AKULA GURU DATTA     
    */
#include<stdio.h>
main()
{
	int a,b,c,d,t,i,k;
	printf("enter your birthday date\n");
	scanf("%d",&a);
	printf("enter your birthday month\n");
	scanf("%d",&b);
	printf("enter your birthday year\n");
	scanf("%d",&t);
	c=t/100;
	d=t%100;
		printf("\n\t\t **MAGIC SQUARE** \n\n now check the sum of \n\t rows,colomns,\n\t boxes ,diagonal e.t.c..,\n first line is your birthday i.e..,%d-%d-%d\n\n",a,b,t);
	 int A[32]={a,b,c,d,d+1,c-1,b+1,a-1,b-2,a-2,d+2,c+2,c+1,d+3,a-3,b-1,a,b,c,d,d-1,c+1,b-1,a+1,b+2,a+2,d-2,c-2,c-1,d-3,a+3,b+1};
if (d<4&&b<2){k=0;}
else {k=16;}
for (i=0+k;i<=15+k;i++){
	if (i%4==0){printf("\n\t---------------------\n\t|");}
	
if (A[i]>=10){printf(" %d |",A[i]);}
else {printf(" 0%d |",A[i]);}
}
printf("\n\t---------------------\n\n");
		
printf("\n you will find the answer as %d\n\n have you identfy your birthday?",a+b+c+d);
}