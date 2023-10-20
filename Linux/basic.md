## Basic Commands

#### 1. mkdir (make directory)
``` 
➜  mkdir newfolder
```

#### 2. ls (list current dir and files)
``` 
➜  ls
newfolder
```

#### 3. ls -a (hidden)
``` 
➜  ls -a
.  ..  newfolder
```
#### 4. touch (create files)
``` 
➜  touch t.txt
➜  ls
newfolder  t.txt
```
#### 5. rm (remove files)
``` 
➜  rm t.txt
➜  ls
newfolder 
```
#### 6. rm -r (remove directory)
``` 
➜  rm -r newfolder
➜  ls
➜  ls -a
.  ..
```
#### 7. rm -r (remove directory)
``` 
➜  rm -r newfolder
➜  ls
➜  ls -a
.  ..
```
#### 8. cd (change directory)
``` 
omhardaha1 in /mnt/c/Projects
➜  mkdir newdir
omhardaha1 in /mnt/c/Projects
➜  cd newdir
omhardaha1 in c/Projects/newdir
➜  cd ..
omhardaha1 in /mnt/c/Projects
```
#### 9. mv (move files and directory) (rename as well)
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
#### 10. cat (show and create the file with contents)
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
