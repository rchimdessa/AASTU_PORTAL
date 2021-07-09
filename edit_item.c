
void edit_item()
{
	int index, valid;
	char target[40];
	FILE *fp, *rp;
	int a=0;
	int id;
	char edit;
	long int size=sizeof(st);
	if((fp=fopen("database.dat","r+"))==NULL)
	{
		printf("NO RECORD ADDED.");
		menu();
	}
	else
	{
		rp = fopen("TempFile.dat","a");
		system("cls");
		printf("Enter Item's' Code for edit:");
		scanf("%i",&id);
		fflush(stdin);
		while(fscanf(fp,"%s %s %i %i %i\n", st.productname,st.productType, &st.price, &st.productid,&st.quantity)!=EOF)
		{
			if(id==st.productid)
			{
				
				a=1;
				printf("\n\t\xdb\xdb\xdb\xdb\xdb Record Found \xdb\xdb\xdb\xdb\xdb");
				printf("\nItem's Name\t\t: %s",st.productname);
				printf("\nItems's Brand\t\t: %s",st.productType);
				printf("\nPrice\t\t\t: %i",st.price);
				printf("\nItem's Code\t\t: %i",st.productid);
				printf("\nItem's Quantity\t:%i",st.quantity);
			
				printf("\n\n\t*** New Record ***");
			do
				{
					
					fflush(stdin);
					printf("\nNew Item's Name\t\t: ");
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
						printf("\n Name contain invalid character. Please 'Enter' again");
						getch();
					
						
					}
				}while(!valid);	//while end here
				
		
				//Product Company
				do
				{
					char productType[40];
					fflush(stdin);
					printf("\nNew Item's Brand\t\t:");
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
				
					do
			{
				printf("\nNew Price [10-5000]BIRR:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);
			
				printf("\nEnter New Item's Code\t\t:");
				scanf("%i",&st.productid); 
				
				do
			{
				printf("\nNew Quantity [1-500]\t:");
				scanf("%i",&st.quantity);
				if(st.quantity<1 || st.quantity>500)
				{
					printf("\n\tEnter New Quantity[1-500] only.Re-Enter.");
				}
			}while(st.quantity<1 || st.quantity>500);
				
				
				printf("Press 'y' to edit the existing record or any key to cancel...");
				edit=getche();
				if(edit=='y' || edit=='Y')
				{
					fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productType, st.price, st.productid,st.quantity);
					fflush(stdin);
					printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
				}
			}
			else
			{
				fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productType, st.price, st.productid,st.quantity);
				fflush(stdin);
			}
			
		}
		if(!a)
		{
			printf("\n\nTHIS ITEM DOESN'T EXIST!!!!");
		}
		fclose(rp);
		fclose(fp);
		remove("database.dat");
		rename("TempFile.dat","database.dat");
		getch();
	}
	menu();
}
