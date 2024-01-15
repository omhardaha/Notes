### JOIN vs SET Operations

| Criteria | JOIN | SET Operations |
| --- | --- | --- |
| **Purpose** | Combines multiple tables based on a matching condition. | Creates a resulting set from two or more SELECT statements. |
| **Combination Type** | Column-wise combination. | Row-wise combination.  |
| **Data Types** | Data types of two tables can be different.| Datatypes of corresponding columns from each table should be the same. |
| **Result Rows** | Can generate both distinct or duplicate rows. | Generates distinct rows. |
| **Number of Columns** | The number of column(s) selected may or may not be the same from each table. | The number of column(s) selected must be the same from each table. |
| **Combination Direction** | Combines results horizontally. | Combines results vertically. |


## SET Operations

### UNION

1. Combines two or more SELECT statements.
2. **Example:**
    ```sql
    SELECT * FROM table1
    UNION
    SELECT * FROM table2;
    ```
3. The number of columns and the order of columns must be the same for table1 and table2.

### INTERSECT

1. Returns common values of the tables.
2. Emulated.
3. **Example:**
    ```sql
    SELECT DISTINCT column-list FROM table-1 INNER JOIN table-2 USING(join_cond);
    ```
4. **Example:**
    ```sql
    SELECT DISTINCT * FROM table1 INNER JOIN table2 ON USING(id);
    ```

### MINUS

1. This operator returns the distinct rows from the first table that do not occur in the second table.
2. Emulated.
3. **Example:**
    ```sql
    SELECT column_list FROM table1 LEFT JOIN table2 ON condition WHERE table2.column_name IS NULL;
    ```
4. **Example:**
    ```sql
    SELECT id FROM table-1 LEFT JOIN table-2 USING(id) WHERE table-2.id IS NULL;
    ```
