#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

#include <sys/time.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_info
{
	unsigned long int	ttd;
	unsigned long int	tte;
	unsigned long int	tts;
	int					number_eat;
	int					phil_n;
	int					*forks;
	struct timeval	timestart;
	int					ded;
}	t_info;

typedef struct	s_id
{
	t_info *info;
	int	id;
	pthread_mutex_t *mutexes;
}	t_id;

void	error_msg(int	err);
unsigned long int	long_atoi(const char *nptr);

#endif
