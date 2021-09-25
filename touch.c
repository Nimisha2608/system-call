#include<stdio.h>
       
#include <utime.h>
#include <stdlib.h>

#include <string.h>
#include <math.h>

#include <stdint.h>
#include <stdbool.h>
 

int retvalue;
void main(int argc,char* argv[]){
if(argc!=2 || argv[1]=="--help"){
printf("Usage::touch textfileTomodify\n");
}
retvalue=utime(argv[1],NULL);
if(retvalue==0){
printf("Timestamp modified\n");
}
}

