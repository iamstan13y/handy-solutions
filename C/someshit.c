/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

int main(){
	
	int day, weekday, month, year;
	printf("Enter The Date To Determine The Day Of Week (e.g. 27 05 for 27 April):\n");
	scanf("%d %d", &day, &month);
		
	if (!(day < 1 || day > 31 || month < 1 || month > 12))
	{
		month -= 2;
		if (month <= 0)
		{
		    month += 6;
		} 
		else if (month == 7)
		{
			month += 3;
		}
		
		weekday = (day + (13 * (month + 1) / 5) + (year) + (year / 4) - (year / 100) + (year / 400)) % 7;
		
		if (weekday < 0)
		{
		    weekday += 7;
		}
		
		switch (weekday)
		{
		    case 0:
			    printf("\n%s", "SUNDAY");
			    break;
		    case 1:
			    printf("\n%s", "MONDAY");
			    break;
		    case 2:
			    printf("\n%s", "TUESDAY");
			    break;
		    case 3:
			    printf("\n%s", "WEDNESDAY");
			    break;
		    case 4:
			    printf("\n%s", "THURSDAY");
			    break;
		    case 5:
			    printf("\n%s", "FRIDAY");
			    break;
		    case 6:
		        printf("\n%s", "SATURDAY");
			    break;
		}
		 
	} 
	else 
	{
	    printf("\n%s", "INVALID");	
	}
	
  return 0;
}

