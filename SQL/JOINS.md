# JOINING TABLES

## 1. Introduction
- All RDBMS are relational in nature, and we refer to other tables to get meaningful outcomes.
- Foreign Keys (FK) are used to reference other tables.

## 2. INNER JOIN
1. Returns a resultant table that has matching values from both the tables or all the tables.
2. Syntax:
    ```sql
    SELECT column-list FROM table1 INNER JOIN table2 ON condition1
    INNER JOIN table3 ON condition2
    ...;
    ```

## 3. Alias in MySQL (AS)
1. Aliases in MySQL are used to give a temporary name to a table or a column in a table for the purpose of a particular query. It works as a nickname for expressing the tables or column names, making the query short and neat.
2. Syntax:
    ```sql
    SELECT col_name AS alias_name FROM table_name;
    SELECT col_name1, col_name2,... FROM table_name AS alias_name;
    ```

## 4. OUTER JOIN
1. **LEFT JOIN:**
    - Returns a resulting table that includes all the data from the left table and the matched data from the right table.
    - Syntax:
        ```sql
        SELECT columns FROM table LEFT JOIN table2 ON Join_Condition;
        ```

2. **RIGHT JOIN:**
    - Returns a resulting table that includes all the data from the right table and the matched data from the left table.
    - Syntax:
        ```sql
        SELECT columns FROM table RIGHT JOIN table2 ON join_cond;
        ```

3. **FULL JOIN:**
    - Returns a resulting table that contains all data when there is a match on left or right table data.
    - Emulated in MySQL using LEFT and RIGHT JOIN, e.g. `LEFT JOIN UNION RIGHT JOIN`.
    - Syntax:
        ```sql
        SELECT columns FROM table1 as t1 LEFT JOIN table2 as t2 ON t1.id = t2.id
        UNION
        SELECT columns FROM table1 as t1 RIGHT JOIN table2 as t2 ON t1.id = t2.id;
        ```

## 5. Additional Join Types
- **UNION ALL:** Can also be used; this will duplicate values while UNION gives unique values.

## 6. CROSS JOIN
1. Returns all the Cartesian products of the data present in both tables, reflecting all possible variations in the output.
2. Used rarely in practical purposes.
3. If Table-1 has 10 rows and Table-2 has 5, then the resultant would have 50 rows.
4. Syntax:
    ```sql
    SELECT column-lists FROM table1 CROSS JOIN table2;
    ```

## 7. SELF JOIN
