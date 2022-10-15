#include<stdio.h>
main(){
	int Num, i = 0;
	printf("Enter Number of users");
	scanf("%d",&i);
	for (; Num< i; Num++){
		int age;
		char r_u;
		printf("ENTER YOUR AGE: ");
		scanf("%d",&age);
		printf("Enter 'r' for ""Rural"" and 'u' for ""Urban"":   ") ;
		scanf("%str",&r_u);
		if(age>=18 && r_u  == 'u')
		printf("Eligible for the vaccine. Kindly proceed for the vaccination\n");
		else if( age<= 18 && r_u == 'r' ){
		printf("Not Eligible for the vaccine. Kindly wait for the vaccination\n");
		}
		else{
			printf("Invalid\n");
		}
		 
		
	}
	
	
	
}
