#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>



int main()
{
  char fname[30];
  int fd=0;
  char Data[11];

  printf("ENter the file name taht you want to open\n");
  scanf("%s",fname);

  fd=open(fname,O_RDWR);
  if(fd==-1)
  {
      printf("unable to open file\n");
      return -1;
  }
  else 
  {
      printf("file is succesfully opnened with fd: %d\n",fd);
  }


   read(fd,Data,6);

   //printf("Data from file is: %6s\n",Data);

   write(1,Data,6);

   close(fd);
    return 0;
}


