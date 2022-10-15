#include<stdio.h>
#include<math.h>
main(){
	int  i, j;
	int lsd = 2; //INPUT LSD HERE
	if(lsd<4|| lsd>0)
	{i = (pow(2,lsd))*2;}
	if(lsd == 0 ){
	i = (pow(2,lsd))*4+3;
	}
//	printf("%d",i);
	for(j=0; i>j;j++)
	{
		int dist_x=0, dist_y=0, k;
		float xy_sq=0, final_dist=0;
		printf("%d Enter the location in x : ", k +=1 );
		scanf("%d",&dist_x);
		printf("Enter the location in y : ");
		scanf("%d",&dist_y);
		xy_sq= pow((dist_x-1),2)+pow((dist_y-3),2);    //x^2+Y^2
		final_dist= sqrt(xy_sq); //(x^2+Y^2)^1/2
		printf("THE DISTANCE IS : %f\n",final_dist);
		
	}
}
