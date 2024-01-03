## PRIMARY Key
- not null, unique and only one per table
```sql
CREATE TABLE customer (
    id INT PRIMARY KEY,
    branch_id INT,
    first_name VARCHAR(255),
    last_name VARCHAR(255),
    dob DATE,
    age INT
);
```
## FOREIGN Key
- refers to PK of other table.
```sql
CREATE TABLE ORDERS (
	id INT PRIMARY KEY,
	delivery_date DATE,
	order_placed_date DATE,
	cust_id INT,
	FOREIGN KEY (cust_id) REFERENCES customer(id)
);
```
## Unique & CHECK & DEFAULT
- Unique, can be null, table can have multiple unique atributes.

```sql
CREATE TABLE LOAN (
    email VARCHAR(52) UNIQUE,
    age int,
    CONSTRAINT age_check CHECK (age > 12),
    interest_rate DOUBLE NOT NULL DEFAULT 4.25
);

```