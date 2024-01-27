- `git init` : Create an empty Git repository or reinitialize an existing one.

  ```
    git init

    Initialized empty Git repository in C:/git-om/.git/

  ```

- `git clone` : Clone a repository into a new directory
   ```
    git clone <URL>
   ```

- `git remote` : It manage a list of remote entries.
  
  - it basically change the `./.git/config` file.
  - `<name>` will become shortcut for `<url>`

    ```bash

    # add the connection
    git remote add <name> <url>
    git remote add origin https://github.com/omhardaha/mult-table.git

    # remove the connection
    git remote rm <name>

    # rename the connection
    git remote rename <old-name> <new-name>
    
    # get <url> from <name>
    git remote get-url [--push] [--all] <name>
    git remote get-url --all om
    ```

- `git status` : It manage a list of remote entries.
    - Its Show the 3 things:

        1. Changes to be committed.

        2. Changes not staged for commit.

        3. Untracked files.


- `git log` : shows the recent commits.
   ```   
    commit 2473f81272f3253e630d264bfeffaffbc78494de (HEAD -> main, origin/main)
    Author: omhardaha <omprakashhardaha369@gmail.com>
    Date:   Fri Jan 19 13:33:20 2024 +0530

        fix Linux(zsh) : fixed error showing on start of linux

    commit d52cf4ca3cdcbf50812e96a8c3e56c3a174ced7a
    Author: omhardaha <omprakashhardaha369@gmail.com>
    Date:   Fri Jan 19 01:38:15 2024 +0530

        feat(Linux) : add system directory notes
   ```
- `git add`: Stages files for  the repository.

  ```bash
  # one or more files

  git add app.py readme.md


  # all files in current directory.

  git add .

  # remove files from stage area

  git restore --staged <file>...
  ```
- `git rm`: Remove tracked files. Inverse of git add

  ```bash
  git rm app.py readme.md
  ```

- `git commit ` : Records changes to the repository.

  ```bash
  #  For only 1 line commit (subject only)
  git commit -m "Add existing project files to Git"

  #  For multiple line commit (sub. + body + footer)
  # this will open file where we can add our commit message.
  # after closing the file it will commit our changes.

  git commit
  ```

- `git checkout` : Switches to a different branch.

    ```bash
    git checkout main
    git checkout om1

    # revert a commit
    git checkout <commit-hash>
    ```
- `git switch` : Switches to a different branch.
    - same as checkout but only focus on branch changing.

    ```bash
    git swich main
    ```

`git clean`: Removes untracked files from the working directory.

 - Example if you have 3 file in project.

 - `t1.js, t2.js, t3.js`.

 - if you do

 - 
    ```bash
    git add t1.js m t2.js

    git status
    Changes to be committed:
    new file:   t1.js
    new file:   t2.js

    
    ls
    t1.js  t2.js t3.js
    ```
    - if you run `git clean` it will delete the t2.js

    ```bash

    git clean -f
    Removing t3.js

    ls
    t1.js  t2.js


    ```
    - -f param is for forcing the command to delete files
