
## Git Branch 

- It is used so that multiple developer can work on a same project.

## Example

### Graphical Representation
```
            ---------file-branch---------
          /                               \
 main ---                                   (merge) --- > main
          \                               /
            ---------calc-branch---------
```

- user1 and user2 are working on a project.

- The initial code :

    ```bash
    ➜  ls
    calculater.cpp  file1.txt  file2.txt
    ```
- The `calculater.cpp` file :
    ```bash
    ➜  cat calculater.cpp 
    #include <bits/stdc++.h>
    using namespace std;    
    int add(int a, int b)   
    {
        return a + b;       
    }
    int main()
    {
        cout << add(2, 4);  
        return 0;
    }%
    ```

- user1 working on a files section and create a new branch `file-branch`
    ```
    git checkout -b file-branch
    ```
- he added a new file `file3.txt`
    ```bash
    ➜  ls
    calculater.cpp  file1.txt  file2.txt  file3.txt
    ```
- then commited on that branch
    ```
    ➜  git add .
    ➜  git commit -m "create the file3.txt"

    ```


- user2 working on a calculater and create a new branch `calc-branch`
    ```
    git checkout -b calc-branch
    ```
- he added the subsctract function on `calculater.cpp` file.
    ```bash
    ➜  cat calculater.cpp 
    #include <bits/stdc++.h>
    using namespace std;
    int add(int a, int b)
    {
        return a + b;
    }
    int sub(int a,int b)
    {
        return a-b;
    }
    int main()
    {
        cout << add(2, 4);
        cout << sub(4-2);
        return 0;
    }
    ```
- then commit on that branch
    ```
    ➜  git add .
    ➜  git commit -m "add the sub funtionality"

    ```

- note user1(file-branch) don't have the updated `calculater.cpp` file.
- note user2(calc-branch) don't have the `file3.cpp` file.

- now we have to merge the `file-branch` and `calc-branch` branches into master.

- then we switch to main branch and merge the `file-branch`.
    ```bash
    $ git checkout main
    Switched to branch 'main'

    $ ls
    calculater.cpp  file1.txt  file2.txt

    $ git merge file-branch
    Updating fc6451d..445651e
    Fast-forward
    file3.txt | 0
    1 file changed, 0 insertions(+), 0 deletions(-)
    create mode 100644 file3.txt

    $ ls
    calculater.cpp  file1.txt  file2.txt  file3.txt
    ```

- then we merge the cal-branch
    ```bash
    $ git merge cal-branch
    Merge made by the 'ort' strategy.
    calculater.cpp | 10 ++++++++--
    1 file changed, 8 insertions(+), 2 deletions(-)
    
    $ ls
    calculater.cpp  file1.txt  file2.txt  file3.txt
    
    $ cat calculater.cpp

    #include <bits/stdc++.h>
    using namespace std;
    int add(int a, int b)
    {
        return a + b;
    }
    int sub(int a,int b)
    {
        return a-b;
    }
    int main()
    {
        cout << add(2, 4);
        cout << sub(4-2);
        return 0;
    }

    ```

## Specific git-branch actions:

- `-a, --all`: list both remote-tracking and local branches

- `-d, --delete`: delete fully merged branch
- `-D`: delete branch (even if not merged)
- `-m, --move`: move/rename a branch and its reflog
- `-M`: move/rename a branch, even if target exists
- `-c, --copy`: copy a branch and its reflog
- `-C`: copy a branch, even if target exists
- `-l, --list`: list branch names
- `--show-current`: show current branch name
- `--create-reflog`: create the branch's reflog
- `--edit-description`: edit the description for the branch
- `-f, --force`: force creation, move/rename, deletion
- `--merged <commit>`: print only branches that are merged
- `--no-merged <commit>`: print only branches that are not merged
- `--column[=<style>]`: list branches in columns
- `--sort <key>`: field name to sort on
- `--points-at <object>`: print only branches of the object
- `-i, --ignore-case`: sorting and filtering are case insensitive
- `--recurse-submodules`: recurse through submodules
- `--format <format>`: format to use for the output
