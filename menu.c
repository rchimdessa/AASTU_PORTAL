//menu
void menu(void)
{
	int choice;
	system("cls");
	main:
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb SuperMarket Management System \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\t\xdb\xdb\xdb\ Enter [1] To Add Items  \xdb\xdb\xdb\");
	printf("\n\t\t\xdb\xdb\xdb\ Enter [2] To Delete Items \xdb\xdb\xdb\");
	printf("\n\t\t\xdb\xdb\xdb\ Enter [3] To Search for Items \xdb\xdb\xdb\");
	printf("\n\t\t\xdb\xdb\xdb\ Enter [4] To View Inventories \xdb\xdb\xdb\");
	printf("\n\t\t\xdb\xdb\xdb\ Enter [5] To Edit Items \xdb\xdb\xdb\");
	printf("\n\t\t\xdb\xdb\xdb\ Enter [6] To Calculate Bill \xdb\xdb\xdb\");
	printf("\n\t\t\xdb\xdb\xdb\ Enter [7] To Exit! \xdb\xdb\xdb\");	
	
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
