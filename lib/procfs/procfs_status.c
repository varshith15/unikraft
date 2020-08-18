#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/param.h>
#include "procfs.h"

int uptime(){
	struct timespec uptime;
  	if (clock_gettime(CLOCK_UPTIME, &uptime) < 0)
  	{
    	return 0;
 	}
  	printf("%ld %ld\n", uptime.tv_sec, uptime.tv_nsec);
  	long int total = uptime.tv_sec+(uptime.tv_nsec)*0.000000001;
  	long int day = total/86400;
  	total = total%86400;
  	long int hour = total/3600;
  	total = total%3600;
  	long int minutes = total/60;
  	total = total%60;

  	printf("%ld Days %ld Hours %ld Minutes %ld Seconds",day,hour,minutes,total);

	return 0;
}
