#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define DIM 1024


int main(){

    FILE*p=fopen("giorgio.txt","r+");

    if(p==NULL){
        perror("errore apertura giorgio.txt\n");
        exit(1);
    }
    printf("apertura giorgio.txt avvenuta con successo\n");

   struct stat buffer[DIM];

    int c=stat("giorgio.txt",buffer);

    printf("valori:%s\n",buffer);
}
