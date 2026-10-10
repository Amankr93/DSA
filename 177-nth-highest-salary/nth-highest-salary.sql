CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
    select ifnull( salary, null) as getNthHighestSalary from employee as e1 where n = (select count(distinct salary )from employee as e2 where e2.salary >=e1.salary) limit 1
  );
END