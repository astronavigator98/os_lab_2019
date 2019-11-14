#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <getopt.h>

int main()
{
    //для дочернего процесса fork()=0
    //для родителя fork()!=0
    pid_t child_pid = fork();
    if(child_pid == 0){
        execl("sequential_min_max", "sequential_min_max", "5", NULL);
    }
    else
        exit(0);
        
}