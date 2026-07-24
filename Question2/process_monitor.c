#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h>

int main()
{
    pid_t pid;

    pid = fork();

    if (pid == 0)
    {
        printf("Child process started. PID = %d\n", getpid());

        sleep(15);

        printf("Child process completed.\n");
    }
    else if (pid > 0)
    {
        printf("Parent process. PID = %d\n", getpid());

        sleep(5);

        if (waitpid(pid, NULL, WNOHANG) == 0)
        {
            printf("Child is unresponsive. Terminating child...\n");
            kill(pid, SIGKILL);
        }

        wait(NULL);

        printf("Zombie process prevented.\n");
    }
    else
    {
        printf("Fork failed.\n");
    }

    return 0;
}
