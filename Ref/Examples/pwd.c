/*
 
This program displays the names of all files in the current directory.
 
    taken from (https://stackoverflow.com/questions/4204666/how-to-list-files-in-a-directory-in-a-c-program)
 
 */

#include <dirent.h>
#include <stdio.h>

int main(void) {
  DIR *d;
  struct dirent *dir;
  d = opendir(".");
  if (d) {
    while ((dir = readdir(d)) != NULL) {
      printf("%s\n", dir->d_name);
    }
    closedir(d);
  }
  return(0);
}
