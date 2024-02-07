## Intallation of Database (MYSQL)
1. Install MySQL Installer - Community
1. Install MySQL Workbench 8.0 CE
1. To create a database if it does not exist:

## Creation of Database

1. To create a database if it does not exist:

   ```sql
   CREATE DATABASE IF NOT EXISTS db-name;
   ```

2. To switch to the created database (execute this to choose on which database `CREATE TABLE`, etc., commands will be executed):

   ```sql
   USE db-name;
   ```

   - Note: Make switching between databases possible.

3. To drop a database if it exists:

   ```sql
   DROP DATABASE IF EXISTS db-name;
   ```

4. To list all databases in the server:

   ```sql
   SHOW DATABASES;
   ```

5. To list tables in the selected database:
   ```sql
   SHOW TABLES;
   ```
6. Create Table: student

```sql
CREATE TABLE student (
    p_id INT, FirstName VARCHAR(255), Address VARCHAR(255), City VARCHAR(255)
);
```
