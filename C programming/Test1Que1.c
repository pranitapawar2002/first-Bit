#include<stdio.h>
void main()
{
	int hour = 1;
	int min = 10;
	int sec = 100;
	 int totsec = hour*3600+min*60+sec;
	 printf(" %d hour %d min %d sec is %d",hour,min,sec,totsec);
}