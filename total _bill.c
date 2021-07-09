void total_bill()
{ 
  float total_amount, amount, sub_total, discount_amount, tax_amount, quantity, value, discount, tax; 
 
  printf("\n Enter the quantity of item sold: "); 
  scanf ("%f", &quantity) ; 
  printf("\n Enter the value of item: "); 
  scanf("%f", &value); 
  printf("\n Enter the discount percentage: "); 
  scanf("%f", &discount); 
  printf (" \n Enter the tax: ") ; 
  scanf ("%f", &tax) ; 
  amount = quantity * value; 
  discount_amount = (amount* discount)/100.0; 
  sub_total =amount - discount_amount; 
  tax_amount= (sub_total*tax) /100.0; 
  total_amount =sub_total+ tax_amount; 
  printf (" \n\n\n \xdb\xdb\xdb\xdb\xdb BILL \xdb\xdb\xdb\xdb\xdb ") ; 
  printf("\nQuantitySold: %f", quantity); 
  printf("\nPriceperitem: %f", value); 
  printf (" \n -------------") ; 
  printf ("\nAmount: %f", amount); 
  printf (" \n Discount: - %f", discount_amount) ; 
  printf ("\n Discounted Total: %f", sub_total) ; 
  printf ("\n Tax:+ %f", tax_amount); 
  printf("\n-------------"); 
  printf ("\n Total Amount %f", total_amount); 
  getch(); 
  menu();
} 
