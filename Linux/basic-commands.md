## Basic Commands

### 1. mkdir (make directory)
- create new dir.
``` 
➜  mkdir newfolder
```

### 2. ls (list current dir and files)

``` 
➜  ls
newfolder
```
- for hidden files
``` 
➜  ls -a
.  ..  newfolder
```
- with list format
``` 
-> drwxrwxrwx 1 omhardaha1 omhardaha1 4096 Jan 16 22:32 .
drwxrwxrwx 1 omhardaha1 omhardaha1 4096 Jan 16 22:46 ..
-rwxrwxrwx 1 omhardaha1 omhardaha1   27 Jan 16 22:32 newfolder
```
### 3. touch (create files)
``` 
➜  touch t.txt
➜  ls
newfolder  t.txt
```
- example 
```
omhardaha1 in /mnt/c/Projects
➜  touch linode{1..10}
omhardaha1 in /mnt/c/Projects
➜  ls
linode1  linode10  linode2  linode3  linode4  linode5  linode6  linode7  linode8  linode9
```
- custom date 
```
➜  touch -d "12/12/2026" newDate
➜  ls
-rwxrwxrwx 1 omhardaha1 omhardaha1    0 Dec 12  2026 newDate
```
### 4. rm (remove files)
``` 
➜  rm t.txt
➜  ls
newfolder 
```
### 5. rm -r (remove directory)
``` 
➜  rm -r newfolder
➜  ls
➜  ls -a
.  ..
```
### 6. rm -r (remove directory)
``` 
➜  rm -r newfolder
➜  ls
➜  ls -a
.  ..
```
### 7. cd (change directory)
``` 
omhardaha1 in /mnt/c/Projects
➜  mkdir newdir
omhardaha1 in /mnt/c/Projects
➜  cd newdir
omhardaha1 in c/Projects/newdir
➜  cd ..
omhardaha1 in /mnt/c/Projects
```
### 8. mv (move files and directory) (rename as well)
``` 
omhardaha1 in /mnt/c/Projects
➜  mkdir new1
omhardaha1 in /mnt/c/Projects
➜  ls
new1  newdir
omhardaha1 in /mnt/c/Projects
➜  mv new1 newdir
omhardaha1 in /mnt/c/Projects
➜  tree
.
└── newdir
    └── new1
```
``` 
omhardaha1 in /mnt/c/Projects
➜  mv newdir newdir1
omhardaha1 in /mnt/c/Projects
➜  tree
.
├── newdir1
    └── new1
 
```

### 9. Tree 
```
➜  tree
.
└── newdir
    └── new1
```

### 10. cat (show and create the file with contents)
create file with text
``` 
omhardaha1 in /mnt/c/Projects
➜  cat > test.txt
this is line 1
this line 2
```

read the file content
```
➜  cat test.txt
this is line 1
this line 2
```
Redirect Contents of a Single File. \
If the destination filename doesn’t exist, it will be created. 
```
omhardaha1 in /mnt/c/Projects
➜  cat test.txt > testnew.txt

omhardaha1 in /mnt/c/Projects
➜  cat testnew.txt
this is line 1
this line 2
```
### 11. pwd (print working dir.)
```
➜  pwd
/mnt/c/Projects
```
### 12. echo (display in string)
```
➜  echo hello users
hello users
```
- put content into file
```
omhardaha1 in /mnt/c/Projects
➜  echo hi dear > dell.txt
omhardaha1 in /mnt/c/Projects
➜  cat dell.txt
hi dear
```