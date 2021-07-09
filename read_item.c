void read_item()
{
	FILE *f;
	int i, q;
	if((f=fopen("database.dat","r"))==NULL)
	{
	
		gotoxy(10,3);
		printf("NO RECORDS");
		printf("\n\t\tPress any key to go back to Menu.");
		getch();
		menu();


	}
	else
	{
	
		gotoxy(0,5);
			for(i=0;i<100;i++)
		{
			printf("\xdb");
		}
		gotoxy(5,6);
		printf("Item's Name");
		gotoxy(25,6);
		printf("Item's Price");
		gotoxy(40,6);
		printf("Item's Type");
		gotoxy(60,6);
		printf("Item's CODE");
		gotoxy(80,6);
		printf("Item's Quantity\n");
		
		for(i=0;i<100;i++)
		{
			printf("\xdb");
		}
		q=8;
		while(fscanf(f,"%s %s %i %i %i\n", st.productname,st.productType, &st.price, &st.productid,&st.quantity)!=EOF)
		{
			gotoxy(5,q);
			printf("%s",st.productname);
			gotoxy(25,q);
			printf("%i",st.price);
			gotoxy(40,q);
			printf("%s",st.productType);
			gotoxy(60,q);
			printf("%i",st.productid);
			gotoxy(80,q);
			printf("%i",st.quantity);
	
			q++;
		}
		printf("\n");
		for(i=0;i<100;i++)
			printf("\xdb");
	}
	fclose(f);
	
	printf("\nPress any key to go to Main Menu!");
		//while((st.c = getch()) =='\r');
		getch();
		menu();
}
