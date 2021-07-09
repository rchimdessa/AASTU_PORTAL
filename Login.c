void login() {
int a=0,i=0;
    char username[10],c=' '; 
    char password[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do {
// this the loin Interface
    printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf(" \n                        USERNAME:-");scanf("%s", &username); 
	printf(" \n                        PASSWORD:-");
	while(i<10)
	{
	    password[i]=getch();
	    c=password[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	password[i]='\0';
	
	i=0;
		if(strcmp(username,"user")==0 && strcmp(password,"pass")==0){
	printf("  \n\n\n       WELCOME TO THE SUPERMARKET MANAGEMENT SYSTEM !! \n LOGIN IS SUCCESSFUL");
	printf("\n\n SYSTEM IS LOADING. PLEASE WAIT... \n");
    for(i=0; i<3; i++){
        printf(".");
        Sleep(500);
    }
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;	
		getch();//holds the screen
	}
}
	while(a<=2);
	if (a>2){
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		getch();
		}
		system("cls");
		menu();	
}
