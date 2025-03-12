# Write your MySQL query statement below

-- select distinct v.visit_id from Visits v
-- join Transactions t
-- on v.visit_id=t.visit_id;

select customer_id,count(customer_id) as count_no_trans from Visits
Where visit_id not in 
(
select distinct v.visit_id from Visits v
join Transactions t
on v.visit_id=t.visit_id
) group by customer_id;