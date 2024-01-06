```sql
CREATE TABLE customer (
    id INT PRIMARY KEY,
    branch_id INT,
    first_name VARCHAR(255),
    last_name VARCHAR(255),
    dob DATE,
    age INT
);

CREATE TABLE ORDERS (
    id INT PRIMARY KEY,
    delivery_date DATE,
    order_placed_date DATE,
    cust_id INT,
    FOREIGN KEY (cust_id) REFERENCES customer(id) ON DELETE CASCADE
    -- FOREIGN KEY (cust_id) REFERENCES customer(id) ON DELETE SET NULL
);

-- Inserting random values into the customer table
INSERT INTO customer (id, branch_id, first_name, last_name, dob, age) VALUES
(1, 101, 'John', 'Doe', '1990-05-15', 32),
(2, 102, 'Jane', 'Smith', '1985-08-22', 37),
(3, 103, 'Robert', 'Johnson', '1992-03-10', 30),
(4, 101, 'Emily', 'Davis', '1988-11-28', 33),
(5, 104, 'Michael', 'Brown', '1980-07-05', 42);

INSERT INTO ORDERS (id, delivery_date, order_placed_date, cust_id) VALUES
(1, '2023-01-10', '2023-01-05', 1);

-- Select all records from ORDERS
SELECT * FROM customer;
SELECT * FROM ORDERS;

-- SQL have some security for some action which requires the safe update val enable.
SET SQL_SAFE_UPDATES = 0;

-- Delete Table
DELETE FROM customer WHERE id = 1;
-- Delete All
Delete from customer;
-- Update Table
Update customer SET branch_id = branch_id + 20 where id > 2;
-- Describe The Structure of table
desc orders;
-- Delete The Schema of table and all entries
drop table orders;
```
