# Write your MySQL query statement below
select distinct num as ConsecutiveNums from (
    select num , 
    lead(num,1) over (order by id) as num1 ,
    lead (num,2) over (order by id) as num2
    from logs
)t where num  = num1 && num = num2;