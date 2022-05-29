#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>



int main()
{
  char fname[30];
  int fd=0;
  char Data[11]="Marvellous";

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


   write(fd,Data,10);
    return 0;
}


