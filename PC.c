#include<stdio.h>
int main()
{
	int buffer[10], bufsize, in, out, produce, consume,choice ;
	choice=0,in = 0,out = 0,bufsize = 10;
	while(choice !=3)
	{
		printf("\n 1. Produce \t 2. Consume \t3. Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice) {
		case 1: if((in+1)%bufsize==out)
				printf("\n Buffer is Full");
			else
			{
				printf("\n Enter the value: ");
				scanf("%d", &produce);
				buffer[in] = produce;
				in = (in+1)%bufsize;
			}
			break;
			printf("\n Enter the value: ");
			scanf("%d", &produce);
			buffer[in] = produce;
			in = (in+1)%bufsize;

		case 2: if(in == out)
				printf("\n Buffer is Empty");

		}
 	}
 }
