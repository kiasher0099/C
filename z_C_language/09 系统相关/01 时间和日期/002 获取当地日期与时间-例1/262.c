#include<stdio.h>
#include<time.h>
main() 
{ 
    struct tm * tmpointer;
    time_t secs;
    time(&secs);
    tmpointer=localtime(&secs);
	printf("\nNow: %d-%d-%d %d:%d:%d",tmpointer->tm_mon,tmpointer->
	tm_mday,tmpointer->tm_year+1900,tmpointer->tm_hour,tmpointer->
	tm_min,tmpointer->tm_sec);

}
