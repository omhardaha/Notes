```
# Add, commit, and push changes with a single command
acp() {
    git add .
    git commit -m "$1"
    git push
}

```

```
acp "Your commit message here"

```