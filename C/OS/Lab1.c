#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
  pid_t pid;
  pid = fork();

  if(pid<0)
  {
    printf("Fork Failed\n");
    exit(0);
  }
  else if(pid==0)
  {
    printf("Child Process\n");
    execlp("ls","ls","-l",NULL);
  }
  else
  {
    wait(NULL);
    printf("Child is created sucessfully\n");
    exit(0);
  }
}