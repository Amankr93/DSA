# Write your MySQL query statement below
select s.score, (select count(distinct ss.score) from scores ss where ss.score>= s.score ) as "rank"
from scores s order by s.score desc;