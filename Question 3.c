#include<stdio.h>
#include<conio.h>
main(){
	int en_dec, number;
	printf("Enter \n 1 for Encryption(To convert number to char)\n 2 for decryption: ");
	scanf("%d",&en_dec);
	if (en_dec ==1)
	{
	printf("Enter a four digit number");
	scanf("%d",&number);
	while(number > 9999 || number < 999){
	printf("Enter a four digit number");
	scanf("%d",&number);}
	 int a, b ,c, d;
	 a = number%10;
	 number = number/10;
	 b = number % 10 ;
	 number = number/10;
	 c = number % 10 ;
	 d = number / 10 ;
	 printf("%c",a+65);
	 printf("%c",b+65);
	 printf("%c",c+65);
	 printf("%c",d+65);
	}
	else if(en_dec ==2 ) {
	char a,b,c,d;
	printf("Enter four char");
	a = getche();
	b = getche();
	c = getche();
	d = getche();
	printf("\n%d",d-65); 		
	printf("%d",c-65);
	printf("%d",b-65);
	printf("%d",a-65);
	}
	
	else{
		printf("Enter a valid choice");
	}
}
