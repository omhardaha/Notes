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

- `git branch`: Creates a new branch.

    ```bash
    # create a new branch

    git branch om1
    git branch om2

    git branch -M main
    ```

- `git checkout`: Switches to a different branch.

    ```
    git checkout main
    git checkout om1
    ```