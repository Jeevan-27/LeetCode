# Write your MySQL query statement below

select * from cinema 
where not (id%2=0 or description="boring")
order by rating desc;