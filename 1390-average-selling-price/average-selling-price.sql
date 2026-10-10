# Write your MySQL query statement below
select p.product_id , 
IFNULL(ROUND(SUM(u.units * p.price) / SUM(u.units), 2), 0) 
as average_price from  prices as p left join unitssold as u on u.product_id = p.product_id && u.purchase_date>=p.start_date && u.purchase_date<= p.end_date group by p.product_id