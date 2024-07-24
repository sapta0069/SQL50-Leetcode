# Write your MySQL query statement below
SELECT r.contest_id, ROUND((COUNT(distinct user_id))*100/(SELECT COUNT(user_id)FROM USERS),2) AS PERCENTAGE
FROM Register r
GROUP BY contest_id
ORDER BY percentage DESC , contest_id
