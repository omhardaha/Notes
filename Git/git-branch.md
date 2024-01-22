## Git Branch 

- It is used so that multiple developer can work on a same project.


- user1 and user2 are working on a website.

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
    int subsctract(int a, int b)   
    {
        return a - b;       
    }
    int main()
    {
        cout << add(2, 4);  
        return 0;
    }%
    ```

- note user1(file-branch) don't have the updated `calculater.cpp` file.
- note user2(calc-branch) don't have the `file3.cpp` file.

- now we have to merge the `file-branch` and `calc-branch` branches into master.