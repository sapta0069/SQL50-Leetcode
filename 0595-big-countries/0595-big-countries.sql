# Write your MySQL query statement below
SELECT
    name,population,area
FROM
   World
WHERE
    area>=3000000 OR population>=25000000  


-- This can also be solved using the UNION function
    /*
    SELECT
    name,population,area
FROM
   World
WHERE
    area>=3000000

    UNION
    SELECT
    name,population,area
FROM
   World
WHERE
   population>=25000000  
*/

