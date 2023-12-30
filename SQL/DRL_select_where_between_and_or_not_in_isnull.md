## SELECT
1. SELECT [ column names ] FROM <table_name>;   
   `SELECT * FROM customer WHERE age > 18;`
2. Order of execution from RIGHT to LEFT

## WHERE
1. Reduce rows based on given conditions.
   - E.g., `SELECT * FROM customer WHERE age > 18;`

## BETWEEN
1. ```SELECT * FROM customer WHERE age between 0 AND 100;```
2. In the above example, 20 and 30 are inclusive.

## AND/OR/NOT
1. **AND:**  `WHERE cond1 AND cond2`
2. **OR:**  `WHERE cond1 OR cond2`
3. **NOT:** `WHERE col_name NOT IN (1, 2, 3, 4);`

## IN
1. Reduces OR conditions.
2. `SELECT * FROM officers WHERE officer_name IN ('Lakshay', 'Maharana Pratap', 'Deepika');`


## IS NULL
1. Example: `SELECT * FROM customer WHERE age IS NULL;`

