# JOINS vs SUBQUERIES

| Joins | Subqueries |
| --- | --- |
|  Faster | Slower |
| Joins maximize calculation burden on DBMS. | Keeps responsibility of calculation on the user. |
| Complex, difficult to understand and implement. | Comparatively easy to understand and implement. |
| Choosing the optimal join for the use case is difficult. | Easy |

### SUB QUERIES

1. Outer query depends on inner query.
2. Alternative to joins.
3. Nested queries.
4. **Example:**
   ```sql
   SELECT column_list (s) FROM table_name WHERE column_name OPERATOR (SELECT column_list (s) FROM table_name [WHERE]);


## Subquery using FROM clause 
   ```sql
   SELECT MAX(rating) FROM (SELECT * FROM movie WHERE country = 'India') as temp;
   ```

## Subquery using SELECT
   ```sql
   SELECT (SELECT column_list(s) FROM T_name WHERE condition), columnList(s) FROM T2_name WHERE condition;
   ```

## Derived Subquery

   ```sql
   SELECT columnLists(s) FROM (SELECT columnLists(s) FROM table_name WHERE [condition]) as new_table_name;
   ```