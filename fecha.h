

#include <stdio.h>
#include <time.h>

struct date
{
	 int da_day;
	 int da_mon;
	 int da_year;
};



struct hora
{
	int ti_hour;
	int ti_min;
	int ti_sec;
};


void get_date(struct date *d);

void get_time(struct hora *t);


void get_date(struct date *d)
{

	time_t tiempo;  
	struct tm *tmPtr; 


	tiempo = time(NULL); 
	tmPtr = localtime(&tiempo); 
	 
	d->da_day=tmPtr->tm_mday; 
	d->da_mon=tmPtr->tm_mon + 1; 
	d->da_year=tmPtr->tm_year + 1900; 

	return ; 

}


void get_time(struct hora *t)

{
	time_t tiempo;  
	struct tm *tmPtr; 

	tiempo = time(NULL); 
	tmPtr = localtime(&tiempo); 

	t->ti_hour=tmPtr->tm_hour; 
	t->ti_min=tmPtr->tm_min; 
	t->ti_sec=tmPtr->tm_sec; 

	return;
}
