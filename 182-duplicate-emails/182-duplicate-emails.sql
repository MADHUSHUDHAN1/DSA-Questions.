# Write your MySQL query statement below
SELECT emp.email AS Email
FROM Person emp, Person man
WHERE emp.email=man.email AND emp.id <> man.id
GROUP BY Email