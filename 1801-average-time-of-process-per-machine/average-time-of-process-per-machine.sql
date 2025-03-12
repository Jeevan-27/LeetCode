# Write your MySQL query statement below

SELECT machine_id, 
       Round((AVG(CASE WHEN activity_type = 2 THEN timestamp END) 
        - 
        AVG(CASE WHEN activity_type = 1 THEN timestamp END)),3) AS processing_time
FROM activity
GROUP BY machine_id;