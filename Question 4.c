#include<math.h>
#include<stdio.h>

main(){
	int random, divisor, ind_sum, age;
	char gender, recheck='r';
	
	while(recheck == 'r'){
		printf("Enter Your gender\n 'M' for MALE\n 'F' for female: ");
		scanf("%str",&gender);
	
	switch(gender)
	{
		case 'M':
			printf("Enter a random four digit number: ");
			fflush(stdin);
			scanf("%d",& random);
			printf("ENTER YOUR AGE: ");
			scanf("%d", &age);
			int sum = 0, remainder=0, mod, code;
			age= age +1;
			random = age + random;
			while (random>0)
			{
				remainder = random%10;
				sum = sum + remainder;
				random= random/10;
				
			}
//			sum = age + sum ;
			mod = sum%5;
			printf("sum IS %d\n",sum);
			printf("MOD IS %d",mod);
			printf("Enter the verification code\n");
			scanf("%d",&code);

			
			if (mod == code)
			{printf("\"Succes\" the verfication is succesfull\n");
			}
			else {
				printf("**Warning**\n there is an error\n");
			}

			break ; 
			
			
		default : 
		printf("enter a valid choice \n");
	}

	recheck = 'r';
	printf("DO YOU WANT TO RECHECK:  or press e for escape");
	recheck = 	getche(recheck);
	printf("\n");
//	scanf("%str",&recheck);
	}
}
