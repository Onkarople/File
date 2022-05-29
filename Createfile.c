#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>



int main()
{
  char fname[30];
  int fd=0;


  printf("ENter the file name taht you want to create\n");
  scanf("%s",fname);

  fd=creat(fname,0777);
  if(fd==-1)
  {
      printf("unable to create file\n");
  }
  else 
  {
      printf("file is succesfully created with fd: %d\n",fd);
  }

    return 0;
}


//user
//owneer //4+2+1
//group
//other

//operations
//read    4
//write   2
//excecute 1