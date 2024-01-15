## ALTER OPERATIONS
```sql
CREATE TABLE LOAN (
    email VARCHAR(52) UNIQUE,
    age int,
    CONSTRAINT age_check CHECK (age > 12),
    interest_rate DOUBLE NOT NULL DEFAULT 4.25
);

```
### ADD
   - Add a new column.
   - Example:
     ```sql
      Alter table LOAN add name varchar(255);
     ```

### MODIFY
   - Change the datatype of an attribute.
   - Example:
     ```sql
     Alter table LOAD_HDFC modify name text(255); 
     ```

### CHANGE COLUMN
   - Rename a column.
   - Example:
     ```sql
        Alter table LOAD_HDFC CHANGE COLUMN name p_name varchar(200); 
     ```

### DROP COLUMN
   - Drop a column completely.
   - Example:
     ```sql
     Alter table LOAD_HDFC DROP COLUMN p_name ; 
     ```
### Rename COLUMN
   - Rename Table Name
        ```sql
        Alter table LOAN RENAME TO LOAD_HDFC;
        ``` 

#### DESC - Describe the attributes of table

```
DESC LOAD_HDFC;
```