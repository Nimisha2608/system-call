#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>
#include<fcntl.h>
#include<errno.h>
char buffer[16384];
int bytes_read;
unsigned lines = 0;
int main(){
char path[100];
    
    printf("Enter source file path: ");
    scanf("%s", path);
int fd1 = open(path, O_RDONLY);

while (bytes_read = read(fd1, buffer, sizeof(buffer))) {
    int i;
    for (i=0; i<bytes_read; i++){
        if (buffer[i] == '\n'||buffer[i] == ' '){
            ++lines;
        }
    }
    printf("no of words= %d",lines);
}
}



