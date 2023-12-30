## Types of SQL commands:

### 1. DDL (Data Definition Language): Defining Relation Schema
- `CREATE`: Create table, database, view.
- `ALTER TABLE`: Modification in table structure (e.g., change column datatype or add/remove columns).
- `DROP`: Delete table, database, view.
- `TRUNCATE`: Remove all the tuples from the table.
- `RENAME`: Rename database name, table name, column name, etc.

### 2. DRL/DQL (Data Retrieval Language / Data Query Language): Retrieve data from the tables
- `SELECT`

### 3. DML (Data Modification Language): Use to perform modifications in the database
- `INSERT`: Insert data into a relation.
- `UPDATE`: Update relation data.
- `DELETE`: Delete row(s) from the relation.

### 4. DCL (Data Control Language): Grant or revoke authorities from users
- `GRANT`: Grant access privileges to the database.
- `REVOKE`: Revoke user access privileges.

### 5. TCL (Transaction Control Language): To manage transactions done in the database
- `START TRANSACTION`: Begin a transaction.
- `COMMIT`: Apply all the changes and end the transaction.
- `ROLLBACK`: Discard changes and end the transaction.
- `SAVEPOINT`: Checkout within the group of transactions in which to rollback.
