#include<stdio.h>
int a[5],pos=-1;
void insert(int e)
{
	if(pos+1==5)
	{
		printf("error:array is full");
	}
	else
	{
		a[++pos]=e;
	}
	}
	void delete()
	{
		if(pos==-1)
		{
			printf("error:array is empty");
		}
		else
		{
			printf("\ndeleted: %d",a[pos--]);
		}
	}
	
	void search()
	{
		int s,i;
		printf("\nenter the element to search: ");
		scanf("%d",&s);
		for(i=0;i<5;i++)
		{
			if (a[i]==s)
			{
				printf("element found at position %d",i);
				break;
			}
		}
	}
	int menu()
	{
		int ch;
		printf("\nINSERT-1\nDELETE-2\nSEARCH-3\nSORT-4\nEXIT-5\nEnter your choice");
		scanf("%d",&ch);
		return ch;
	}
	void processArray()
	{
		int ch;
		for(ch=menu();ch!=5;ch=menu())
		{
			switch(ch)
			{
				case 1:
					printf("enter the value to insert");
					scanf("%d",&ch);
					insert(ch);
					break;
				case 2:
					delete();
					break;
				case 3:
					search();
					break;
				case 4:
					break;
				default:
					printf("error:wrong choice");
					break;
			}
		}
	}
	
	int main()
	{
		processArray();
		return 0;
	}
