#include<stdio.h>
main(){
	int i ;
	char mob_car;	
	printf("ENTER M for Connecting with mobile, and S for communicating with car: ")	;
	scanf("%c",&mob_car);	
	if(mob_car== 'M'){
		for(i = 0; i < 23; i++){
			printf("Move straight\n ");
			if(i == 2|| i == 7|| i ==12 || i == 17){
				printf("***\n***");
			}
		}
	}
	if(mob_car== 'S'){
		for(i = 0; i < 23; i++){
			printf("Mobile is in city zone\n ");
			if(i == 2|| i == 7|| i ==12 || i == 17){
				printf("**\n**");
			}
		}
	}
}
