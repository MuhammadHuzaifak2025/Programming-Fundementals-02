#include<stdio.h>
#include<math.h>
main(){
	int hour, days,quan_ice;
	float per_ice_cost, a;
	double hours;
	per_ice_cost = 1.2;
	printf("Enter how much hours you want machine to operate: ");
	scanf("%d",&hour);
	printf("Enter the quatnity of icecream: ");
	scanf("%d",&quan_ice);
	if (hour == 8){
		int price, ice_per_cost;
		days = (quan_ice / 50)/8;
		hours = (quan_ice %400);
		hours = hours / 8;
//	a= quan_ice/50;
//		hours = a-days;w
		printf("%d\n%.0f\n",days,ceil(hours));
		price=per_ice_cost*quan_ice;
		printf("%d",price);
	}
	if(hour==16){
		
	
		
	}
}
