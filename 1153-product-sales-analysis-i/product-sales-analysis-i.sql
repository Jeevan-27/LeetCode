# Write your MySQL query statement below

select p.product_name,s.year,s.price 
from
Sales s,Product p
where
s.sale_id in (select sale_id from Sales)
and
s.product_id=p.product_id;
