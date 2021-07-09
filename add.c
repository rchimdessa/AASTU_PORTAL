#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9




struct item
{
	char productname[40],productType[40],c;
	int productid;
	int price;
	int quantity;
}st;

void wel_come(void);
void title(void);
void login();
void menu(void);
void title(void);
void deleteproduct(void);
void gotoxy(short x, short y)
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void add_item();
void read_item();
void search_item();
void edit_item();
void total_bill();
void main(void){
wel_come(); //calling the welcome screen function
login(); //call for login function
}

void add_item()
{
	int index, valid;
	char c;
	int a=0;

	FILE *fp;
	

	do
	{
		system("cls");
		printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb Enter Item Details \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		int ID;//for comparing staff ID if file isnot NULL
		//declaration of file variable named as sfile
		fp = fopen("database.dat","a+");//opening file and creating a staff.txt file to append or write
		
		if((fp = fopen("database.dat","a+"))!=NULL)//if condition to check file is NULL or not
		{
			I:
			printf("\nItem Code\t :");
			scanf("%i",&ID);
			while(fscanf(fp,"%s %s %i %i %i", st.productname, st.productType, &st.price, &st.productid,&st.quantity)!=EOF)
			{
				/*
				fscanf reads every data stored in the file
				if entered staffID already exist then jumps to
				position I declared inside if(sfile!=NULL) at top
				*/
				if(ID == st.productid)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			st.productid = ID;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t :");
			scanf("%i",&st.productid);
		}
		
	//add product name
		do
		{
		
			//printf("<<<<<<<<<<<<<<Enter Product Detail>>>>>>>>>>>>>");
			fflush(stdin);
			printf("\nItem Name\t :");
			gets(st.productname); // get input string
			st.productname[0]=toupper(st.productname[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productname); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productname[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contains invalid character. Please 'Enter' again");
				getch();
			
				
			}
		}while(!valid);	//while end here
		

		//Product Company
			do
		{
			char productType[40];
			fflush(stdin);
			printf("\nItem Type\t :");
			gets(st.productType); // get input string
			st.productType[0]=toupper(st.productType[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productType); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productType[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();
			

				
			}
		}while(!valid);
		
		//productid
		do
			{
				printf("\nEnter Price in BIRR:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);
			
				do
			{
				printf("\nQuantity [1-500]\t:");
				scanf("%i",&st.quantity);
				if(st.quantity<1 || st.quantity>500)
				{
					printf("\n\tEnter Quantity[1-500] only.Re-Enter.");
				}
			}while(st.quantity<1 || st.quantity>500);
	
	//	printf("\nProduct Price\t :");
	//	scanf("%i", &st.price);
		//printf("\nProduct ID\t :");
		//scanf("%i", &st.productid);
	//	printf("\nProduct Quantity :");
	//	scanf("%i",&st.Qnt);
		
		fp=fopen("database.dat","a");
		fprintf(fp,"\n%s %s %i %i %i", st.productname, st.productType,st.price, st.productid,st.quantity);
		fclose(fp);
		printf("\nPress 'Enter' to add more items and any other key to go to the main menu");
		
	}
	while((c = getch()) =='\r');
	menu();
}

