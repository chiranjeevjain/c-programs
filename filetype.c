#include "time.h"
#include "sys\stat.h"
#include "stdio.h"
void main(){
    struct stat status;
    FILE *fp;
    stat("c:\\tc\\bin",&status);
    clrscr();
    if (status.st_mode & S_IFDIR)
         printf("It is directory.\n");
    if (status.st_mode & S_IFCHR)
         printf("It is chracter file.");
    if (status.st_mode & S_IFREG)
         printf("It is reggular file.");
    getch();

}

Output: It is directory.
Explanation:
Function int stat (char *, struct stat *) store the information of open file in form of structure struct stat Structure struct stat has been defined in sys\stat.h as

struct stat {
    short  st_dev,   st_ino;
    short  st_mode,  st_nlink;
    int    st_uid,   st_gid;
    short  st_rdev;
    long   st_size,  st_atime;
    long   st_mtime, st_ctime;
};

Here 

(m)st_dev: It describe file has stored in which drive of your computer.

(n)st_mode:  It describes various modes of file like file is read only, write only, folder, character file etc.

(o)st_size: It tells the size of file in byte.

(p)St_ctime:It tells last data of modification of
   the file.

There are some macro has been defined in sys\stat.h

 Name         Meaning
 S_IFMT        File type mask
 S_IFDIR       Directory
 S_IFIFO      FIFO special
 S_IFCHR      Character special
 S_IFBLK      Block special
 S_IFREG      Regular file
 S_IREAD      Owner can read
 S_IWRITE     Owner can write
 S_IEXEC      Owner can execute

So masking or bitwise and operation between status.st_mode and S_IFDIR return true if it is directory and so on 