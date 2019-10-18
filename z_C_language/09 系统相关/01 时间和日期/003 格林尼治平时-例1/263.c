#include<stdio.h>
#include<time.h>
main() 
{ 
    struct tm * gmtp;
    time_t secs;
    time(&secs);
    gmtp=gmtime(&secs);
	printf("\nGreenwich time: %d-%d-%d %d:%d:%d",gmtp->tm_mon,
	gmtp->tm_mday,gmtp->tm_year+1900,gmtp->tm_hour,
	gmtp->tm_min,gmtp->tm_sec);
}
