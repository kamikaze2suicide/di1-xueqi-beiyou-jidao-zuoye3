#include <stdio.h>

int getDays(int year, int month);

int main(){
	int y, m;
	scanf("%d %d", &y, &m);
	printf("There are %d days in month %d year %d.", getDays(y, m), m, y);
	return 0;
}

int getDays(int year, int month){
	
	switch(month){
		case 2:
			{
				if(year%4 == 0 && year % 100 != 0 || year % 400 == 0 || year % 3200==0 && year % 172800==0)
				{
					return 29;	
				}else{
					return 28;
				}
			}
		case 4:
		case 11:
		case 9:
		case 6:
			return 30;
		default:
			return 31;
	}
	
}
