#include<stdio.h>  
#define size 5

int queue[size],f=-1,r=-1;

void rear();
void front();
void show();
int main()
{
	int ch;
	
	printf("1.rear\n");
	printf("2.front\n");
	printf("3.show\n");
	while(1)
	{
		printf("\n ENTER THE CHOICE:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:rear();
			break;
			case 2:front();
			break;
			case 3:show(); 
			break;
			 
			default:printf("INVALIDE OPTION:");
		}
		
	}
}

void rear()
{
	int item;
	if(r==size-1)
	{
	
         printf("queue is full");
	  return;	
	}
	else if(f==-1)
		{
			f=0;
			r=0;
		} 			
		else
		{
		printf("INSERT ELEMENT IN QUEUE:");
		scanf("%d",&item);
		r=r+1;
		queue[r]=item;
		}
}
void front()
{
	if(f==-1)
	{
	
	 printf("QUEUE IS EMPTY");
	}
	printf("DELETE:%d",queue[f]);
	 
	if(f==r)
	{
		r=-1;
		f=-1;
	}
	else
	{
		f=f+1;
	}


}
void show()
{
	int i;
	if(f==-1)
	{
	   printf("QUEUE IS EMPTY");
	   return;      	
	}
	else
	{
		printf("QUEUE ELEMENT:");
		for(i=f;i<=r;i++)
		{
			printf("%d",queue[i]);
		}
       }
       
}
