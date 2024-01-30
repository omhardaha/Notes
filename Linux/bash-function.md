# Function

Bash functions are similar to our programing function. Here we can group the commands with arguments.

## Example

Here the example of function whitch can do (Add, commit, and push) changes with a single command.

```bash
acp() {
    git add .
    git commit -m "$1"
    git push
}
```

No need to run commands one by one.

```bash
acp "Your commit message here"
```

## Arguments

Arguments can accessed as `$1 $2 - $n`
Arguments can pass as seperated value `"we" "are" "here"`

Initialize

```bash
speak()
> {
>     echo $1
>     echo $2
>     echo $3
> }
```

Run

```
speak we are don
we
are
```

## Note

Bash Function only remain in current session.

## Shell Script File

We can call function using the script file(sh)

- make a file with `.sh` extention.

```bash
vim call.sh
```

- Declare and invoke the Functions on the file.

```bash

cat call.sh
call1(){
        echo "my name is function 1";
}

call2(){
        echo "my name is function 2";
}

# Invoing Function
call1
call2
call1
```
