#include <stdio.h>
#include <semaphore.h>
#include <unistd.h>

sem_t mutex_odd,mutex_even;

int main()
{
   int o=1,e=2;
   pid_t pid = fork();
   sem_init(&mutex_odd,0,1);
sem_init(&mutex_even,0,1);
if(pid>0)
{
while(o<=9)
{
  sem_wait(&mutex_even);
  printf("parent : 2 x %d = %d\n", o, 2*o);
  o+=2;
  sem_post(&mutex_odd);
}
}
else if(pid == 0)
{
while(e<=10)
{
   sem_wait(&mutex_odd);
   printf("parent : 2 x %d = %d\n", e, 2*e);
   e+=2;
   sem_post(&mutex_even);
}
}
else
{
   printf("Child process couldn't be created!\n");
   exit(0);
}
return 0;
}
