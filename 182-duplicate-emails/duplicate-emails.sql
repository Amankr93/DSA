# Write your MySQL query statement below
select distinct l.email as Email from person as l join person as r on l.email = r.email where l.id!=r.id;