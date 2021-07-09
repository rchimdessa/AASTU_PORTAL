//menu
void menu(void)
{
	int choice;
	system("cls");
	main:
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb SuperMarket Management System \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] To Add Items");
	printf("\n\t\tEnter [2] To Delete Items");
	printf("\n\t\tEnter [3] To Search for Items");
	printf("\n\t\tEnter [4] To View Inventories");
	printf("\n\t\tEnter [5] To Edit Items");
	printf("\n\t\tEnter [6] To Calculate Bill");
	printf("\n\t\tEnter [7] To Exit!");	
	
	printf("\n\n\t\tEnter your choice[1-6]");
	scanf("%i", &choice);
	
	system("cls");
	
	switch(choice)	
	{
		case 1:
			add_item();
			break;
		case 2:
			deleteproduct();
			break;
		case 3:
		search_item();
			break;
		case 4:
		read_item();
			break;	
		case 5:
			edit_item();
			break;
		case 6:
			total_bill();
			break;
		case 7:
		printf("System Exit");
		exit(0);
		break;
			
		
		default:
		printf("Invalid Choice! System Exit\n");
			getch();
	}
	
}
//end of menu
