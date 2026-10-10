# Write your MySQL query statement below
select ifnull(max(salary),null) as secondHighestSalary from employee where salary not in (select max(salary) from employee)