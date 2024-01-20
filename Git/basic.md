


- `git push`: Uploads changes to a remote repository.

    ```
    git push -u -f origin master.
    -f = force
    ```

- `git pull`: Downloads changes from a remote repository.

    ```

    ```



- `git merge`: Combines changes from different branches into a single branch.

    ```

    ```

`git diff`: Shows the differences between two files or between the working directory and the staging area.

```

```

`git reset`: Resets the working directory to a previous state.

```

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

#### git stash: Saves changes to the working directory without committing them.

```

```

#### git pop: Restores changes from the stash.

```

```
#### git grep: Searches for a pattern in the codebase.

```

```

#### git bisect: Searches for the commit that introduced a bug.

```

```

#### git tag: Creates a tag for a specific commit.

```

```

#### git cherry-pick: Applies a commit from one branch to another.

```

```

#### git revert: Reverts a commit.

```

```

#### git am: Applies a patch to a repository.

```

```

#### git rebase: Rebases a branch on top of another branch.

```

```

#### git fetch: Fetches changes from a remote repository.

```

```

#### git pull-request: Creates a pull request for a branch.

```

```
