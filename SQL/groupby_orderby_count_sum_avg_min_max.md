

## ORDER BY
1. Sorting the data retrieved using WHERE clause.
2. `ORDER BY <column-name> DESC;`
3. `DESC` = Descending and `ASC` = Ascending.
4. Example: `SELECT * FROM customer ORDER BY name DESC;`

## GROUP BY
1. GROUP BY Clause is used to collect data from multiple records and group the result by one or more columns. It is generally used in a SELECT statement.
2. Groups into categories based on the given columns.
3. Example: `SELECT c1, c2, c3 FROM sample_table WHERE cond GROUP BY c1, c2, c3.`
4. All the column names mentioned after the SELECT statement shall be repeated in GROUP BY, in order to successfully execute the query.
5. Used with aggregation functions to perform various actions.
   - `COUNT()`
   - `SUM()`
   - `AVG()`
   - `MIN()`
   - `MAX()`
