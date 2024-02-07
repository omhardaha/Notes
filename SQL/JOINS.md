# JOINING TABLES

## 1. Introduction

- All RDBMS are relational in nature, and we refer to other tables to get meaningful outcomes.
- Foreign Keys (FK) are used to reference other tables.

  ```sql
  CREATE TABLE Customer (
      id INT PRIMARY KEY, branch_id INT, first_name VARCHAR(255), last_name VARCHAR(255), dob DATE, age INT
  );
  ```

  | id  | branch_id | first_name | last_name | dob        | age |
  | --- | --------- | ---------- | --------- | ---------- | --- |
  | 1   | 101       | John       | Doe       | 1990-05-15 | 32  |
  | 2   | 102       | Jane       | Smith     | 1985-08-22 | 37  |
  | 3   | 103       | Robert     | Johnson   | 1992-03-10 | 30  |
  | 4   | 101       | Emily      | Davis     | 1988-11-28 | 33  |
  | 5   | 104       | Michael    | Brown     | 1980-07-05 | 42  |

  ```sql
  CREATE TABLE ORDERS (
      id INT PRIMARY KEY, delivery_date DATE, order_placed_date DATE, cust_id INT, FOREIGN KEY (cust_id) REFERENCES customer(id)
  );
  ```

  | id  | delivery_date | order_placed_date | cust_id |
  | --- | ------------- | ----------------- | ------- |
  | 1   | 2023-01-10    | 2023-01-05        | 1       |
  | 2   | 2023-01-10    | 2023-01-05        | 2       |
  | 3   | 2023-01-10    | 2023-01-05        | 6       |
  | 4   | 2023-01-10    | 2023-01-05        | 7       |
  | 5   | 2023-01-10    | 2023-01-05        | 8       |

## 1. INNER JOIN

1. Returns a resultant table that has matching values from both the tables or all the tables.
2. Syntax:

   ```sql
   SELECT customer.first_name , ORDERS.delivery_date FROM customer INNER JOIN ORDERS ON customer.id = ORDERS.cust_id;
   ```

   | Name | Delivery Date |
   | ---- | ------------- |
   | John | 2023-01-10    |
   | Jane | 2023-01-10    |

## 2. OUTER JOIN

1. **LEFT JOIN:**

   - Returns a resulting table that includes all the data from the left table and the matched data from the right table.
   - Syntax:

   ```sql
    SELECT customer.first_name , ORDERS.delivery_date FROM customer LEFT JOIN ORDERS ON customer.id=ORDERS.cust_id;
   ```

   | Name    | Delivery Date |
   | ------- | ------------- |
   | John    | 2023-01-10    |
   | Jane    | 2023-01-10    |
   | Robert  |               |
   | Emily   |               |
   | Michael |               |

2. **RIGHT JOIN:**

   - Returns a resulting table that includes all the data from the right table and the matched data from the left table.
   - Syntax:

   ```sql
       SELECT ORDERS.id AS order_id, customer.first_name , ORDERS.delivery_date FROM customer RIGHT JOIN ORDERS ON customer.id=ORDERS.cust_id;
   ```

   | Order ID | First Name | Delivery Date |
   | -------- | ---------- | ------------- |
   | 1        | John       | 2023-01-10    |
   | 2        | Jane       | 2023-01-10    |
   | 3        |            | 2023-01-10    |
   | 4        |            | 2023-01-10    |
   | 5        |            | 2023-01-10    |

3. **FULL JOIN:**

   - Returns a resulting table that contains all data when there is a match on left or right table data.
   - Emulated in MySQL using LEFT and RIGHT JOIN, e.g. `LEFT JOIN UNION RIGHT JOIN`.
   - Syntax:

     ```sql

        SELECT customer.first_name , ORDERS.delivery_date FROM customer LEFT JOIN ORDERS ON customer.id=ORDERS.cust_id UNION SELECT  customer.first_name , ORDERS.delivery_date FROM customer RIGHT JOIN ORDERS ON customer.id=ORDERS.cust_id;
     ```

     | First Name | Delivery Date |
     | ---------- | ------------- |
     | Jane       | 2023-01-10    |
     | Robert     |               |
     | Emily      |               |
     | Michael    |               |
     |            | 2023-01-10    |

## 5. Additional Join Types

- **UNION ALL:** Can also be used; this will duplicate values while UNION gives unique values.

## 6. CROSS JOIN

1. Returns all the Cartesian products of the data present in both tables, reflecting all possible variations in the output.
2. Used rarely in practical purposes.
3. If Table-1 has 10 rows and Table-2 has 5, then the resultant would have 50 rows.
4. Syntax:
   ```sql
    SELECT * FROM customer CROSS JOIN orders;
   ```
   | Customer.id | Customer.branch_id | Customer.first_name | Customer.last_name | Customer.dob | Customer.age | Orders.id | Orders.delivery_date | Orders.order_placed_date | Orders.cust_id |
   | ----------- | ------------------ | ------------------- | ------------------ | ------------ | ------------ | --------- | -------------------- | ------------------------ | -------------- |
   | 1           | 101                | John                | Doe                | 1990-05-15   | 32           | 1         | 2023-01-10           | 2023-01-05               | 1              |
   | 1           | 101                | John                | Doe                | 1990-05-15   | 32           | 2         | 2023-01-10           | 2023-01-05               | 2              |
   | 1           | 101                | John                | Doe                | 1990-05-15   | 32           | 3         | 2023-01-10           | 2023-01-05               | 6              |
   | 1           | 101                | John                | Doe                | 1990-05-15   | 32           | 4         | 2023-01-10           | 2023-01-05               | 7              |
   | 1           | 101                | John                | Doe                | 1990-05-15   | 32           | 5         | 2023-01-10           | 2023-01-05               | 8              |
   | 2           | 102                | Jane                | Smith              | 1985-08-22   | 37           | 1         | 2023-01-10           | 2023-01-05               | 1              |
   | 2           | 102                | Jane                | Smith              | 1985-08-22   | 37           | 2         | 2023-01-10           | 2023-01-05               | 2              |
   | 2           | 102                | Jane                | Smith              | 1985-08-22   | 37           | 3         | 2023-01-10           | 2023-01-05               | 6              |
   | 2           | 102                | Jane                | Smith              | 1985-08-22   | 37           | 4         | 2023-01-10           | 2023-01-05               | 7              |
   | 2           | 102                | Jane                | Smith              | 1985-08-22   | 37           | 5         | 2023-01-10           | 2023-01-05               | 8              |
   | 3           | 103                | Robert              | Johnson            | 1992-03-10   | 30           | 1         | 2023-01-10           | 2023-01-05               | 1              |
   | 3           | 103                | Robert              | Johnson            | 1992-03-10   | 30           | 2         | 2023-01-10           | 2023-01-05               | 2              |
   | 3           | 103                | Robert              | Johnson            | 1992-03-10   | 30           | 3         | 2023-01-10           | 2023-01-05               | 6              |
   | 3           | 103                | Robert              | Johnson            | 1992-03-10   | 30           | 4         | 2023-01-10           | 2023-01-05               | 7              |
   | 3           | 103                | Robert              | Johnson            | 1992-03-10   | 30           | 5         | 2023-01-10           | 2023-01-05               | 8              |
   | 4           | 101                | Emily               | Davis              | 1988-11-28   | 33           | 1         | 2023-01-10           | 2023-01-05               | 1              |
   | 4           | 101                | Emily               | Davis              | 1988-11-28   | 33           | 2         | 2023-01-10           | 2023-01-05               | 2              |
   | 4           | 101                | Emily               | Davis              | 1988-11-28   | 33           | 3         | 2023-01-10           | 2023-01-05               | 6              |
   | 4           | 101                | Emily               | Davis              | 1988-11-28   | 33           | 4         | 2023-01-10           | 2023-01-05               | 7              |
   | 4           | 101                | Emily               | Davis              | 1988-11-28   | 33           | 5         | 2023-01-10           | 2023-01-05               | 8              |
   | 5           | 104                | Michael             | Brown              | 1980-07-05   | 42           | 1         | 2023-01-10           | 2023-01-05               | 1              |
   | 5           | 104                | Michael             | Brown              | 1980-07-05   | 42           | 2         | 2023-01-10           | 2023-01-05               | 2              |
   | 5           | 104                | Michael             | Brown              | 1980-        |

## 7. SELF JOIN

### Join without using join keywords.

**Example 1:**

```sql
SELECT * FROM table1, table2 WHERE table1.condition_column = table2.condition_column;
```

**Example 2:**

```sql
SELECT artist_name, album_name, year_recorded FROM artist, album WHERE artist.id = album.artist_id;
```
