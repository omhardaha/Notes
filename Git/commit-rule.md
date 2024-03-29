## Rule

### Rule 0 : Structure

```
<type>[optional scope]: <description>

[optional body]

[optional footer(s)]
```

### Rule 1 : Use the Imperative mood

- use `add` instead of `added`.

### Rule 2 : Subject Line

- limit 50 characters.
- capatilize first latter of subject line.
- not end with full stop '.'.

    ```
    Add new database file
    ```

### Rule 2 : Body Line

- limit 70 characters.
- describe what and why but not how.
- mention which component was changed.

### Rule 4 : Spacing and Blank Line

- put a `blank` line between `subject` line and `body` line.

### Rule 5 : Files

- never commit change for different files seperately. 
- ex. if we are creating login.jsx login.css ets for a component.
- commit like "add new layout for login page".

### Rule 6 : Conventional Commits

- **test:** For including test.
- **feat:** For new feature.
- **perf:** Performance changes.
- **fix:** For fixes.
- **chore:** Specially in config files ,for update that doesn't affect the user
- **refactor:** Code Formate Or Add Comments only.
- **doc:** Files like txt,md,.log etc. , Updating documentations.
- **style:** Code style change (indentation, colon).

Note: Commit with `!` for drawing attention to breaking changes

### Examples
* ```feat: add email notifications on new direct messages```
* ```feat(shopping cart): add the amazing button```
* ```fix(api): handle empty message in request body```
* ```fix(api): fix wrong calculation of request body checksum```

* ```perf: decrease memory footprint for determine uniqe visitors by using HyperLogLog```
* ```build: update dependencies```
* ```build(release): `bump version to 1.0.0```
* ```  refactor: implement fibonacci number calculation as recursion```
* ```style: remove empty line```
* ```feat: add about section```
* change classname from mb-6 to mb-5 ```fix: fix margin bottom css class typo```
* ```refactor: format document & add comments```
* ```refactor: format document & add comments```
* For Version Release ```chore(release): bump version to x.x.x```
* For Dependencies updation ```chore(deps): bump X dependency to x.x.x version```
* ```chore(deps): bump deps to the latest version```
* ```chore(editorconfig): add new config```
* ```chore(editorconfig): remove js file config```
* ```chore(editorconfig): remove js file config```
* ```chore(editorconfig): add XxX feature for js files```
* ```chore(eslint): add new rule for XxX feature```
* ```chore(pkg): add new dev dependency```
* ```chore(pkg): add XxX dependency```
* ```chore(pkg): bump pkg version to x.x.x```
* ```chore(pkg): add pkg description```
* ```chore(pkg): add XxX config for xXx```


### Commit with Body
* ```
  fix: add missing parameter to service call
  The error occurred because of <reasons>.
  ```
* ```
  feat!: remove ticket list endpoint

  refers to JIRA-1337

  BREAKING CHANGES: ticket enpoints no longer supports list all entites.
  ```